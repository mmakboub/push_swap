/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:18:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/18 20:56:07 by mmakboub         ###   ########.fr       */
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
		if(checking_sorting(stack_a))
			exit(0);
		 //free stack
		if(len == 1 || len == 0)
			exit(0);
		else if(len == 2 || len == 3)
			sorting3(&stack_a, len);
		else if(len == 4 )
			sorting4(&stack_a, &stack_b, 4);
		else if(len == 5)
			sorting5(&stack_a, &stack_b, 5);
	}
	else
		exit(0);
		/*else if(len > 5)
			sortingmore(&stack_a, &stack_b);*/
	while(stack_a)
	{
		printf("----> %d\n", stack_a->data);
		// printf("--index--%d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	return (0);
}