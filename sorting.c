/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:05:14 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/15 23:25:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	sorting3(t_stack **head , int lenght)
{

	if(lenght == 2 && (*head)->data > (*head)->next->data){
		ft_swap(&(*head)->data, &(*head)->next->data, head,"sa\n");
	}
	if(lenght == 3)
	{
		if((*head)->data > (*head)->next->data)
		{
			if((*head)->next->data < (*head)->next->next->data)
				{
					if((*head)->data < (*head)->next->next->data)
						ft_swap(&(*head)->data ,&(*head)->next->data, head, "sa\n");
					else
						ra(head, "ra\n");
				}
			else
			{
				ft_swap(&(*head)->data ,&(*head)->next->data, head, "sa\n");
				rra(head, "rra\n");
			}
		}
		else if ((*head)->data < (*head)->next->data && (*head)->next->data > (*head)->next->next->data)
		{
			if((*head)->data < (*head)->next->next->data)
			{
				ft_swap(&(*head)->data, &(*head)->next->data, head,"sa\n");
				ra(head, "ra\n");
			}
			else
				rra(head, "rra\n");
				
		}
	}
}