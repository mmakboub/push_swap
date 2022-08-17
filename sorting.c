/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/18 00:16:10 by mmakboub         ###   ########.fr       */
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
	 while(top)
	 {
		 if(indice == 1)
		 {
			 min = top->data;
			 indice = 0;
		 }
		 else 
		 {
		 	if(min > top->data)
			 {
			 	min = top->data;
				index= top->index; 
			 }
				 
		 }
		top = top->next;
	 }
	 return(index);
 }

void sorting5(t_stack	**stack_a, t_stack	**stack_b, int	len)
{
	int value;
	int	minvalue;
	int x;
	minvalue = finding_min(*stack_a);
	value = len/2;
	x = len - minvalue;
	if (len == 4)
	{
		if(value > minvalue)
		{
			while(minvalue--)
				ra(stack_a, "ra\n");
		}
		else
		{
			while(x--)
				rra(stack_a, "rra\n");
		}
		push(stack_a, stack_b, "pb\n");
		sorting3(stack_a, 3);
		push(stack_b, stack_a, "pa\n");
	}
}
void	sorting3(t_stack **head , int lenght)
{

	if(lenght == 2 && (*head)->data > (*head)->next->data){
		ft_swap(head,"sa\n");
	}
	if(lenght == 3)
	{
		if((*head)->data > (*head)->next->data)
		{
			if((*head)->next->data < (*head)->next->next->data)
				{
					if((*head)->data < (*head)->next->next->data)
						ft_swap(head, "sa\n");
					else
						ra(head, "ra\n");
				}
			else
			{
				ft_swap(head, "sa\n");
				rra(head, "rra\n");
			}
		}
		else if ((*head)->data < (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
		{
			if((*head)->data < (*head)->next->next->data)
			{
				ft_swap(head,"sa\n");
				ra(head, "ra\n");
			}
			else
				rra(head, "rra\n");
				
		}
	}
}