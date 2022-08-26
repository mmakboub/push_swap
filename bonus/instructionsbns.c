/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsbns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:55:02 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/26 17:30:06 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap_bonus.h"

void	ft_push(t_stack **head1, t_stack **head2)
{
	t_stack	*temp;

	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
}

void	ft_swap(t_stack **head)
{
	int	swap;

	if (head && (*head)->next)
	{
		swap = (*head)->data;
		(*head)->data = (*head)->next->data;
		(*head)->next->data = swap;
	}
}

void	rotate(t_stack **stack_a)
{
	t_stack	*top;
	t_stack	*tmp;

	tmp = *stack_a;
	top = *stack_a;
	while (top)
	{
		if (top->next == NULL)
		{
			*stack_a = tmp->next;
			top->next = tmp;
			tmp->next = NULL;
			break ;
		}
		top = top->next;
	}
}

void	reverse_rotate(t_stack	**stack_a)
{
	t_stack	*top;
	t_stack	*end;

	top = *stack_a;
	while (top)
	{
		if (top->next->next != NULL)
			top = top->next;
		else
		{
			end = top ->next;
			top->next = NULL;
			ft_lstadd_front (stack_a, end);
			break ;
		}
	}
}

void	indexing(t_stack *stack_a)
{
	int		i;
	t_stack	*top;

	i = 0;
	top = stack_a;
	while (top)
	{
		top->index = i;
		top = top->next;
		i++;
	}
}
