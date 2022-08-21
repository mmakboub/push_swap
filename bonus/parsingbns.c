/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsingbns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:49:46 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/20 23:50:54 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pushswap_bonus.h"

void	add_to_stack(t_stack	**stack_a, char **str)
{
	t_stack	*new;
	int		i;

	i = 0;
	while (str[i])
	{	
		new = ft_lstnew((ft_atoi(str[i])), i);
		ft_lstadd_back(stack_a, new);
		i++;
	}
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
int	checking_array(char **str)
{
	int		i;
	int		y;
	long	nbr;

	i = 1;
	y = 0;
	while (str[i])
	{
		if (str[i][0] != '-' && str[i][0] != '+' && !ft_isdigit (str[i][0]))
			return (printf("error2\n"), 0);
		if (str[i][1] == '\0' && !ft_isdigit (str[i][0]))
			return (printf("error22\n"), exit (0), 0);
		y = 1;
		while (str[i][y])
		{
			if (str[i][y] < '0' || str[i][y] > '9')
				return (printf("error3\n"), 0);
			y++;
		}
		nbr = ft_atoi(str[i]);
		if (nbr > 2147483647 || nbr < INT_MIN)
			return (printf("error4\n"), 0);
		i++;
	}
	return (1);
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