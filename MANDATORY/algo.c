/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:56:33 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/23 21:35:21 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"
void	initstack1(t_stack	*stack_a)
{
	while(stack_a)
		stack_a->data = 1;
		stack_a = stack_a->next;
}
t_stack	duplicate_stack(t_stack **stack_a)
{
	t_stack **temp;
	int len;
	len = ft_lstsize(stack_a);
	temp = (t_stack **)malloc(sizeof(t_stack));
	if(!)
	
	
}
int longest_i_sub(t_stack *stack_a)
{
	t_stack	*tab_len;
	t_stack	*tab_seq;
	int i;
	int j;
	int len;
	indexing(*stack_a);
	i = 1;
	j = 0;
	len = ft_lstsize(stack_a)
	tab_len = (int *)malloc(sizeof(int));
	tab_seq = (int *)malloc(sizeof(int));
	initstack1(tab_len);
	while (i < len)
	{
		j = 0;
		while(j < i)
		{
			if(tab_seq->data < tab_seq->next->data)
			{
				if(tab_len->data + 1 > tab_len->next->data)
					tab_len->next->data = tab_len->data + 1 ;
				tab_seq->data = tab_seq->next->index;
					
			}
		}
		j++;
	}
	i++;
}