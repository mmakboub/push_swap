/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:43:35 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/16 17:43:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"
 int finding_min(t_stack	*stack_a)
 {
	 int indice;
	 int min;
	 t_stack	*top;
	 indice = 1;
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
			 	min = stack_a->data;
		 }
		top = top->next;
	 }
	 return(min);
 }

int		findingindex(t_stack	*stack_a)
{
	int	i;
	t_stack *head;

	i = 0;
	head = stack_a;
	while(head)
	{
		head->index = i;
		head = head->next;
		i++;	
	}
	return(head->index)
}

void sorting5(t_stack	*stack_a, t_stack	*stack_b, int	len)
{
	int minvalue;
	if (len == 4)
	{
		minvalue = finding_min(stack_a);
		if(stack_a->indexmin == 0) 
			push(&stack_a, &stack_b, "pa\n");
		else if (stack_a->indexmin == 1)
		{
			ft_swap(&stack_a, "sa\n");
			push(&stack_a, &stack_b, "pa\n");
		}
		else if (stack_a->index == 2)
		{
			ra(&stack_a, "ra\n");
			ft_swap(&stack_a, "sa\n");
			push(&stack_a, &stack_b, "pa\n");
			
		}
		else if (stack_a->indexmin == 3)
				{
					rra(&stack_a, "rra\n");
					push(&stack_a, &stack_b, "pa\n");
				}
		sorting3(&stack_a, 3);
		push_a(&stack_b, &stack_a);
	}
	else
		
	
}