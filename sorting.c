/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/14 21:04:54 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	sorting3(t_stack **head , int lenght)
{

	if(lenght == 2 && (*head)->data > (*head)->next->data)
		swap((*head)->data, (*head)->next->data, (*head));
	if(lenght == 3)
	{
		if((*head)->data > (*head)->next->data)
		{
			if((*head)->next->data < (*head)->next->next->data)
				swap((*head)->data, (*head)->next->data, (*head)); 
			else
			{
				swap((*head)->data , (*head)->next->data);
				rra(head);
			}
		}
		if((*head)->data > (*head)->next->data && (*head)->next->data < (*head)->next->next->data)
			rra();
		if ((*head)->data < (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
			ra(head);
	}
}