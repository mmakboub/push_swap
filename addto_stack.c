/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:35:50 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/17 23:19:38 by mmakboub         ###   ########.fr       */
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
		new = ft_lstnew((ft_atoi(str[i])), i);
		ft_lstadd_back(stack_a, new);
		i++;
	}
}
