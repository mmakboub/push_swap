/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/12 22:06:52 by mmakboub         ###   ########.fr       */
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
void	sorting3max(t_stack **head , int size)
{
	size = lstsize(*head);
	if(size == 1)
		exit(0);
	if(size == 2 && (*head)->data > (*head)->next->data)
		swap((*head)->data, (*head)->next->data, (*head));
	if(size == 3)
	{
		if((*head)->data > (*head)->next->data)
		{
			if((*head)->next->data < (*head)->next->next->data)
				swap((*head)->data, (*head)->next->data, (*head)); 
			else
			{
				swap((*head)->data , (*head)->next->data);
				rra();
			}
		}
		if((*head)->data > (*head)->next->data && (*head)->next->data < (*head)->next->next->data)
			rra();
		if ((*head)->data < (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
			ra(head);
	}
}