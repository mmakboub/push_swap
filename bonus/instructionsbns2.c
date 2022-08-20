/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionsbns2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:48:37 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/21 00:37:23 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void ss(t_stack **stack_a, t_stack	**stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void rr(t_stack **stack_a, t_stack	**stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void rrr(t_stack **stack_a, t_stack	**stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}