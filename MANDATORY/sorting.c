/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/28 17:37:05 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	sorting4(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	minvalue;
	int	x;

	indexing(*stack_a);
	minvalue = finding_min(*stack_a);
	x = len - minvalue;
	if (len == 4)
	{
		if (2 > minvalue)
		{
			while (minvalue--)
				rotate(stack_a, "ra\n");
		}
		else
		{
			while (x--)
				reverse_rotate(stack_a, "rra\n");
		}
		push(stack_a, stack_b, "pb\n");
		sorting3(stack_a, 3);
		push(stack_b, stack_a, "pa\n");
	}
}

void	sorting5(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	minvalue;
	int	x;

	minvalue = finding_min(*stack_a);
	x = len - minvalue;
	if (len == 5)
	{
		if (2 > minvalue)
		{
			while (minvalue--)
				rotate(stack_a, "ra\n");
		}
		else
		{
			while (x--)
				reverse_rotate(stack_a, "rra\n");
		}
		push(stack_a, stack_b, "pb\n");
		sorting4(stack_a, stack_b, 4);
		push(stack_b, stack_a, "pa\n");
	}
}

void	sorting3_v2(t_stack **head)
{
	if ((*head)->data < (*head)->next->next->data)
	{
		ft_swap(head, "sa\n");
		rotate(head, "ra\n");
	}
	else
		reverse_rotate(head, "rra\n");
}

void	sorting3(t_stack **head, int lenght)
{
	if (lenght == 2 && (*head)->data > (*head)->next->data)
		ft_swap(head, "sa\n");
	if (lenght == 3)
	{
		if ((*head)->data > (*head)->next->data)
		{
			if ((*head)->next->data < (*head)->next->next->data)
			{
				if ((*head)->data < (*head)->next->next->data)
					ft_swap(head, "sa\n");
				else
					rotate(head, "ra\n");
			}
			else
			{
				ft_swap(head, "sa\n");
				reverse_rotate(head, "rra\n");
			}
		}
		else if ((*head)->data < (*head)->next->data \
				&& (*head)->next->data > (*head)->next->next->data)
			sorting3_v2(head);
	}
}
