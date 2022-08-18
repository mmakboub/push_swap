/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addto_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:35:50 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/18 15:32:50 by mmakboub         ###   ########.fr       */
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

int finding_min(t_stack	*stack_a)
 {
	 int indice;
	 int index;
	 int min;
	 t_stack	*top;
	 indice = 1;
	 index = 0;
	 top = stack_a;
	 while(top)
	 {
		 if(indice == 1)
		 {
			 min = top->data;
			 indice = 0;
		 }
		 else 
		 {
		 	if(min > top->data)
			 {
			 	min = top->data;
				index= top->index; 
			 }	 
		 }
		top = top->next;
	 }
	 return(index);
 }