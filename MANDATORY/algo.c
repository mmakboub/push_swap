/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:56:33 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/24 23:46:39 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

t_stack		*lng_i_sub(t_stack	**stack_a)
{
	t_stack	*head;
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*tmp3;
	t_stack	*retour;

	int len;
	tmp = *stack_a;
	head = *stack_a;
	int i;
	int j;
	int y=0;
	len = ft_lstsize(stack_a);
	while (head)
	{
		i = 1;
		i = 0;
		tmp2 = head;
		tmp2 = tmp3;
		while(j > len)
		{
			if(tmp3-> data > tmp2->data)
			{
				i++;
				tmp3 = tmp2;
			}
			j++;
			tmp2 = tmp2->next;
			if (!tmp2)
				tmp2 = tmp;
		}
		if (i > y){
			y =i;
			retour = head;
		}
		head = head->next;
	}
	return (retour);
}

void	sort(t_stack	**stack_a, t_stack	**stack_b)
{
	t_stack	*head;
	
	while ()
	{
	
	}
	
}