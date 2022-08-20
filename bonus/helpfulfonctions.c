/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpfulfonctions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:13:52 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/20 23:51:31 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	ft_lstadd_back(t_stack **alst, t_stack *new)
{
	t_stack	*node;

	node = *alst;
	if (alst && *alst)
	{
		while (node -> next)
		{
			node = node -> next;
		}
			node -> next = new;
	}
	else
		*alst = new;
}

void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	new -> next = *alst;
	*alst = new;
}

t_stack	*ft_lstnew(int data, int index)
{
	t_stack	*newelement;

	newelement = (t_stack *)malloc(sizeof(t_stack));
	if (newelement == 0)
		return (0);
	newelement->data = data;
	newelement->index = index;
	newelement->next = 0;
	return (newelement);
}

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

int	ft_strcal_size(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1)) + 1;
	return (len);
}
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}