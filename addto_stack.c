/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:35:50 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/14 20:21:13 by mmakboub         ###   ########.fr       */
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
		new = (t_stack *)malloc(sizeof(t_stack));
		new->data = ft_atoi(str[i]);
		ft_lstadd_back(stack_a, new);
	}	
}