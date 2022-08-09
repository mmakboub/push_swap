/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/09 21:41:13 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

int	ft_lstsize(t_stack *lst)

{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}
void	sorting3max(t_stack *stack_a , int size)
{
	size = lstsize(stack_a)
	if(size == 1)
		exit(0);
	if(size == 2 && stack_a->data > stack_a->next->data)
		swap(stack_a->data, stack_a->next->data)
	if(size == 3)
	{
		if(head->data > head->next->data)
		{
			if(head->next->data < head->next->next->data)
				swap(head->data , head->next->data);
			else
			{
				swap(head->data , head->next->data);
				rra();
			}
		}
		if(head->data > head->next->data && head->next->data < head->next->next->data)
			rra();
		if (head->data < head->next->data && head->next->data > head->next->next->data)
			ra();
	}
}