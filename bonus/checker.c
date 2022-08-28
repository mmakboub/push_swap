/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:45:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/28 18:22:32 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	checkerv2(t_stack **stack_a, t_stack	**stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str != NULL)
	{
		check_instructions(str);
		apl_instc(str, stack_a, stack_b);
		free (str);
		str = get_next_line(0);
	}	
}

void	puting_checker(t_stack	*stack_a, t_stack	*stack_b)
{
	if (checking_sorting(stack_a) && stack_b == NULL)
		ft_putstr("OK");
	else
		ft_putstr("KO");
}

void	apl_instc(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(str, "sa\n"))
		ft_swap(stack_a);
	if (!ft_strcmp(str, "sb\n"))
		ft_swap(stack_b);
	if (!ft_strcmp(str, "ss\n"))
		ss(stack_a, stack_b);
	if (!ft_strcmp(str, "pa\n"))
		ft_push(stack_b, stack_a);
	if (!ft_strcmp(str, "pb\n"))
		ft_push(stack_a, stack_b);
	if (!ft_strcmp(str, "ra\n"))
		rotate(stack_a);
	if (!ft_strcmp(str, "rb\n"))
		rotate(stack_b);
	if (!ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b);
	if (!ft_strcmp(str, "rra\n"))
		reverse_rotate(stack_a);
	if (!ft_strcmp(str, "rrb\n"))
		reverse_rotate(stack_b);
	if (!ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b);
}

void	check_instructions(char *str)
{
	if (ft_strcmp(str, "sa\n") && ft_strcmp(str, "sb\n") && ft_strcmp(str, "ss\n") \
		&& ft_strcmp(str, "pa\n") && ft_strcmp(str, "pb\n") \
		&& ft_strcmp(str, "rr\n") && ft_strcmp(str, "ra\n") \
		&& ft_strcmp(str, "rb\n") && ft_strcmp(str, "rra\n") \
		&& ft_strcmp(str, "rrb\n") && ft_strcmp(str, "rrr\n"))
	{
		print_error(str);
	}
}

int	main(int argc, char **argv)
{
	char	**ptr;
	char	*sptr;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(0);
	else
	{
		sptr = ft_strjoin(argc - 1, argv + 1, " ");
		ptr = ft_split(sptr, ' ');
		free(sptr);
		checking_array(ptr);
		if (!checking_double(ptr))
			return (write(1, "error\n", 6), 0);
		add_to_stack(&stack_a, ptr);
		checkerv2(&stack_a, &stack_b);
		puting_checker(stack_a, stack_b);
	}
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
}
