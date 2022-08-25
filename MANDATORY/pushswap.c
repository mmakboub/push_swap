/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:18:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/25 23:42:07 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

int	main(int argc, char **argv)
{
	char	**str;
	char	*sep;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		len;

	stack_a = NULL;
	stack_b = NULL;
	sep = " ";
	if (argc != 1)
	{
		str = ft_split(ft_strjoin(argc - 1, argv + 1, sep), ' ');
		checking_array(str);
		if (!checking_double(str))
			return (printf("error1\n"), 0);
		add_to_stack(&stack_a, str);
		len = ft_lstsize(stack_a);
		if (checking_sorting(stack_a))
			exit(0);
		if (len == 1 || len == 0)
			exit(0);
		else if (len == 2 || len == 3)
			sorting3(&stack_a, len);
		else if (len == 4)
			sorting4(&stack_a, &stack_b, 4);
		else if (len == 5)
			sorting5(&stack_a, &stack_b, 5);
		else if (len > 5)
			algo(&stack_a, &stack_b);
	}
	// t_stack	*head;
	// head = stack_a;
	// while (head)
	// {
	// 	printf("index: %d --------------- value: %d\n", head->index, head->data);
	// 	head = head->next;
	// }
	// int x = 2;
	// int i;
	// i = 8;
	// int chift;
	// while(i >= 0)
	// {
	// 	printf("%d", ((x >> i) & 1));
	// 	i--;
	// }
	return (0);
}
