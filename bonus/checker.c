/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:45:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/21 15:38:15 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
void	applicate_instructions(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if(!ft_strcmp(str, "sa\n"))
		ft_swap(stack_a);
	if(!ft_strcmp(str, "sb\n"))
		ft_swap(stack_b);
	if(!ft_strcmp(str, "ss\n"))
		ss(stack_a, stack_b);
	if(!ft_strcmp(str, "pa\n"))
		ft_push(stack_a, stack_b);
	if(!ft_strcmp(str, "pb\n"))
		ft_push(stack_b, stack_a);
	if(!ft_strcmp(str, "ra\n"))
		rotate(stack_a);
	if(!ft_strcmp(str, "rb\n"))
		rotate(stack_b);
	if(!ft_strcmp(str, "rr\n"))
		rr(stack_a, stack_b);
	if(!ft_strcmp(str, "rra\n"))
		reverse_rotate(stack_a);
	if(!ft_strcmp(str, "rrb\n"))
		reverse_rotate(stack_b);
	if(!ft_strcmp(str, "rrr\n"))
		rrr(stack_a, stack_b);
}
	
void	check_instructions(char *str)
{
	if(ft_strcmp(str, "sa\n") && ft_strcmp(str, "sb\n") && ft_strcmp(str, "ss\n") \
		&& ft_strcmp(str, "pa\n") && ft_strcmp(str, "pb\n") &&  ft_strcmp(str, "rr\n") \
		&& ft_strcmp(str, "ra\n") &&  ft_strcmp(str, "rb\n") &&  ft_strcmp(str, "rra\n") \
		&& ft_strcmp(str, "rrb\n") &&  ft_strcmp(str, "rrr\n"))
	{
		exit(0);
	}
}

int main(int argc, char **argv)
{
	
	char	**ptr;
	char	*sep;
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	sep = " ";
	str = get_next_line(0);
	if (argc == 1)
		exit(0);
	else
	{
		ptr = ft_split(ft_strjoin(argc - 1, argv + 1, sep), ' ');
		checking_array(ptr);
		if (!checking_double(ptr))
			return (printf("error1\n"), 0);
		add_to_stack(&stack_a, ptr);
		while(str)
		{
			check_instructions(str);
			applicate_instructions(str, &stack_a, &stack_b);
			free (str);
			str = get_next_line(0);
			
		}
		if(checking_sorting(stack_a) && stack_b == NULL)
			ft_putstr("OK");
		else
			ft_putstr("KO");
	}
}