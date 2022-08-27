/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:35:50 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/27 22:55:51 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	add_to_stack(t_stack	**stack_a, char **str)
{
	t_stack	*new;
	int		i;

	i = 0;
	while (str[i])
	{	
		new = ft_lstnew((ft_atoi(str[i])), i);
		ft_lstadd_back(stack_a, new);
		i++;
	}
}

int	finding_min(t_stack	*stack_a)
{
	int		index;
	int		min;

	index = 0;
	min = stack_a->data;
	while (stack_a)
	{
		if (min > stack_a->data)
		{
			min = stack_a->data;
			index = stack_a->index;
		}
		stack_a = stack_a->next;
	}
	return (index);
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
