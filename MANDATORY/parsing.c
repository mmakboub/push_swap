/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:57:21 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/28 18:15:00 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void	checking_array(char **str)
{
	int			i;
	int			y;
	long long	nbr;

	i = 0;
	y = 0;
	while (str[i])
	{
		if (str[i][0] != '-' && str[i][0] != '+' && !ft_isdigit (str[i][0]))
			print_error(*str);
		if (str[i][1] == '\0' && !ft_isdigit (str[i][0]))
			print_error(*str);
		nbr = ft_atoi(str[i]);
		printf("%lld\n", nbr);
		if (nbr > 2147483647 || nbr < -2147483648)
			print_error(*str);
		y = 1;
		while (str[i][y])
		{
			if (str[i][y] < '0' || str[i][y] > '9')
				print_error(*str);
			y++;
		}
		i++;
	}
}

int	checking_double(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	checking_sorting(t_stack *stack_a)
{
	t_stack	*temp;

	temp = stack_a;
	while (temp && temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
