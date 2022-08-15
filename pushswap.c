/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:18:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/15 22:19:37 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

int main (int argc, char **argv)
{
	char	**str;
	char	*sep;
	int		i;
    int 	y;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int len;

	stack_a = NULL;
	stack_b = NULL;
	len = ft_lstsize(stack_a);
    i = 0;
    y = 0;
	sep = " ";
	if(argc != 1)
	{
		str = ft_split(ft_strjoin(argc - 1, argv + 1, sep), ' ');
		checking_array(str);
		if(!checking_double(str))
			return(printf("error1\n"), 0);
		add_to_stack(&stack_a, str);
		len = ft_lstsize(stack_a);
		if(checking_sorting(stack_a)){
			exit(0);
		 //free stack
		}
		if(len == 1 || len == 0)
			exit(0);
		if(len == 2 || len == 3)
			sorting3(&stack_a, len);
		//if(len == 4 || len == 5)
			//sorting5(&stack_a, &stack_b, len);
		//else if(len > 5)
			//sortingmore(&stack_a, &stack_b);
	}
	while(stack_a)
	{
		printf("----%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
	return (0);
}