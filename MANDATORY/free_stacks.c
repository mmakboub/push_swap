/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:20:15 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/27 21:53:44 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_lstdelone(t_stack *lst)
{
	if (!lst)
		return ;
	else
	{
		free(lst);
	}
}

void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)-> next;
		ft_lstdelone(temp);
	}
	free(*lst);
	*lst = NULL;
}

void	print_error(char *str)
{
	(void)str;
	write(1, "error\n", 6);
	exit(0);
}
