/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:18:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/28 18:20:55 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

static void	freefnct(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static void	algo_s(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len == 1 || len == 0)
		exit(0);
	else if (len == 2 || len == 3)
		sorting3(stack_a, len);
	else if (len == 4)
		sorting4(stack_a, stack_b, 4);
	else if (len == 5)
		sorting5(stack_a, stack_b, 5);
	else if (len > 5)
		algo(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	char	**str;
	char	*ptr;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc != 1)
	{
		ptr = ft_strjoin(argc - 1, argv + 1, " ");
		str = ft_split(ptr, ' ');
		free(ptr);
		checking_array(str);
		if (!checking_double(str))
			return (write(1, "error\n", 6), 0);
		add_to_stack(&stack_a, str);
		freefnct(str);
		if (checking_sorting(stack_a))
			exit(0);
		algo_s(&stack_a, &stack_b);
	}
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}
