/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:35:50 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/16 16:49:38 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	add_to_stack(t_stack	**stack_a, char **str)
{
	t_stack *new;
	int i;
	i = 0;
	while(str[i])
	{	
		new = ft_lstnew((ft_atoi(str[i])));
		ft_lstadd_back(stack_a, new);
		i++;
	}
}
void	index(t_stack *stack)
{
		int	i;
		t_stack *head;

		i = 0;
		head = stack;
		while(head)
		{
			head->index = i;
			head = head->next;
			i++;	
		}
}