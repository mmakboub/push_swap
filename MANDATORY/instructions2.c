/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:01:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/27 22:19:27 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	ss(t_stack **stack_a, t_stack **stack_b, char *str)
{
	ft_swap(stack_a, "sa\n");
	ft_swap(stack_b, "sb\n");
	ft_printf("%s", str);
}

void	rr(t_stack **stack_a, t_stack **stack_b, char *str)
{
	ra(stack_a, "ra\n");
	ra(stack_b, "rb\n");
	ft_printf("%s", str);
}

void	rrr(t_stack **stack_a, t_stack **stack_b, char *str)
{
	rra(stack_a, "rra\n");
	rra(stack_b, "rrb\n");
	ft_printf("%s", str);
}
