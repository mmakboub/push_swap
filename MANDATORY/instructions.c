/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:50:27 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/28 17:37:26 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	push(t_stack **head1, t_stack **head2, char *str)
{
	t_stack	*temp;

	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
	ft_printf("%s", str);
}

void	ft_swap(t_stack **head, char *str)
{
	int	swap;

	if (head && (*head)->next)
	{
		swap = (*head)->data;
		(*head)->data = (*head)->next->data;
		(*head)->next->data = swap;
	}
	ft_printf("%s", str);
}

void	rotate(t_stack **stack_a, char *str)
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
	ft_printf("%s", str);
}

void	reverse_rotate(t_stack	**stack_a, char *str)
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
	ft_printf("%s", str);
}
