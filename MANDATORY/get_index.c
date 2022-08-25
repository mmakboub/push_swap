/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:25:47 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/26 00:35:09 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
t_stack	*finding_min2(t_stack	*stack_a)
{
	int		indice;
	t_stack		*min;
	t_stack	*top;

	indice = 1;
	top = stack_a;
	while (top)
	{
		if (indice == 1 && top->index == -1)
		{
			min = top;
			indice = 0;
		}
		else
		{
			if (min->data > top->data && top->index == -1)
				min = top;
		}
		top = top->next;
	}
	return (min);
}

void getAllIndex(t_stack *stack)
{
	t_stack *temp;
	int i;

	temp = stack;
	int sz = ft_lstsize(temp);
	while (temp)
	{
		temp->index = -1;
		temp = temp->next;
	}
	temp = stack;
	i = 0;
	t_stack *stack2;
	stack2 = stack;
	while (i < sz)
		finding_min2(temp)->index = i++;
}

int	max_binary(t_stack	**stack_a)
{
	int len;
	int max_num;
	int max_bit;
	t_stack	*temp;
	
	temp = *stack_a;
	max_bit = 0;
	len = ft_lstsize(temp);
	max_num = len - 1;
	while((max_num >> max_bit) != 0)
		++max_bit;
	return(max_bit);
}
	
void	algo(t_stack **stack_a, t_stack	**stack_b)
{
	int i;
	int j;
	int	max_bit;
	int len;
	int 	len_b;
	t_stack	*head;

	max_bit = max_binary(stack_a);
	i = 0;
	head = *stack_a;
	getAllIndex(*stack_a);
	while(i < max_bit)
	{
		j = 0;
		len = ft_lstsize(*stack_a);
		while(j < len)
		{

			if(((*stack_a)->index >> i) & 1)
				ra(stack_a, "ra\n");
			else
				push(stack_a, stack_b, "pb\n");
			j++;
		}
		len_b = ft_lstsize(*stack_b);
		j = 0;
		while(j < len_b){
			if((((*stack_b)->index >> (i + 1)) & 1) == 0 && i != max_bit - 1)
				ra(stack_b, "rb\n");
			else
				push(stack_b, stack_a, "pa\n");
			j++;
		}
		i++;
	}
}