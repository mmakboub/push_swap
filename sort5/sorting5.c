/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:43:35 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/18 00:08:41 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"
 
int finding_min(t_stack	*stack_a)
 {
	 int indice;
	 int index;
	 int min;
	 t_stack	*top;
	 indice = 1;
	 index = 0;
	 top = stack_a;
	 while(stack_a)
	 {
		 if(indice = 1)
		 {
			 min = stack_a->data;
			 indice = 0;
		 }
		 else 
		 {
		 	if(min > stack_a->data)
			 {
			 	min = stack_a->data;
				index= stack_a->index; 
			 }
				 
		 }
		top = top->next;
	 }
	 return(index);
 }

void sorting5(t_stack	*stack_a, t_stack	*stack_b, int	len)
{
	int value;
	int	minvalue;
	int x;
	
	minvalue = finding_min(stack_a);
	value = len/2;
	x = len - minvalue;
	if (len == 4)
	{
		if(value > minvalue)
		{
			while(minvalue--)
				ra(&stack_a, "ra\n");
		}
		else
		{
			while(x--)
				rra(&stack_a, "rra\n");
		}
		push(&stack_a, &stack_b, "pb\n");
		sorting3(&stack_a, 3);
		push(&stack_b, &stack_a, "pa\n");
	}
}
	
		// {
		// 	push(&stack_a, &stack_b, "pa\n");
		// 	sorting3(&stack_a, 3);
		// }
			
		// else if (minvalue == 1)
		// {
		// 	ft_swap(&stack_a, "sa\n");
		// 	push(&stack_a, &stack_b, "pa\n");
		// 	if(!checking_sorting(stack_a))
		// 	{
		// 		sorting3(&stack_a, 3);
		// 		push(&stack_b, &stack_a, "pa\n");
		// 	}
		// 	else
		// 		push(&stack_b, &stack_a, "pa\n");
		// }
		// else if (minvalue == 2)
		// {
		// 	ra(&stack_a, "ra\n");
		// 	ft_swap(&stack_a, "sa\n");
		// 	push(&stack_a, &stack_b, "pa\n");
		// 	if(!checking_sorting(stack_a))
		// 		sorting3(&stack_a, 3);
		// 	else
		// 		push(&stack_b, &stack_a, "pa\n");
		// }
		// else if (minvalue == 3)
		// 		{
		// 			rra(&stack_a, "rra\n");
		// 			push(&stack_a, &stack_b, "pa\n");
		// 			if(!checking_sorting(stack_a))
		// 				sorting3(&stack_a, 3);
						
		// 			else
		// 				push(&stack_b, &stack_a, "pa\n");
		// 		}
	}
	else
		
	
}