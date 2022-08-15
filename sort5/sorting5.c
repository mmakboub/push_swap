/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 00:43:35 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/15 20:43:25 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"
 int finding_min(t_stack	*head)
 {
	 int indice;
	 int min;
	 t_stack	*top;
	 indice = 1;
	 top = head;
	 while(head)
	 {
		 if(indice = 1)
		 {
			 min = head->data;
			 indice = 0;
		 }
		 else 
		 {
		 	if(min > head->data)
			 	min = head->data;
		 }
		top = top->next;
	 }
	 return(min);
 }


void sorting5(t_stack	*stack_a, t_stack	*stack_b, int	len)
{
	int minvalue;
	if (len == 4)
	{
		minvalue = finding_min(stack_a);
		push_b(minvalue, &stack_a, &stack_b);
		sorting3(&stack_a, 3);
		push_a(minvalue, &stack_b, &stack_a);
	}
	
}