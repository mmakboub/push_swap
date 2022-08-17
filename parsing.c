/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:57:21 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/17 22:00:24 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

int	checking_array(char **str)
{
	int i;
	int y;
	i = 1;
	y = 0;
	
	while(str[i])
	{
		if (str[i][0] != '-' && str[i][0] != '+' && !ft_isdigit(str[i][0]))
				return (printf("error2\n"), 0);
		if (str[i][1] == '\0' && !ft_isdigit(str[i][0]))
				return (printf("error22\n"), 0);
    	y = 1;
    	while(str[i][y])
    	{
			if (str[i][y] < '0' || str[i][y] > '9')
				return(printf("error3\n"), 0);
    	    y++;
    	}
		long nbr = ft_atoi(str[i]);
		if (nbr > 2147483647 || nbr < INT_MIN)
			return(printf("error4\n"), 0);
		i++;
	}
	return(1);
}

int	checking_double(char **str)
{
	int i;
	int j;
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while(str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}
int checking_sorting(t_stack *stack_a)
{
	t_stack *temp;
	temp = stack_a;
	//printf("hiiiiii");
	while(temp && temp->next)
	{
		//printf("hiiiiii1");
		if (temp->data > temp->next->data)
			return(0);
		temp = temp->next;
	}
	return (1);
}