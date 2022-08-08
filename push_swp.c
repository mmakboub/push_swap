/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:18:12 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/08 21:55:40 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
		if (str[i] == '+' || str[i] == '-')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (sign * result);
}

int ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

int is_digit(char **str)
{
	long num;
	int sign;
	int	i;

	i = 0;
	sign = 1;
	num = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		num = (num * 10) + (str[i] - 48);
		i++;
	}
	num *= sign;
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}
int main(int ac, char **str)
{
    int i;
    int y;
	char *sep = " ";

    i = 1;
    y = 0;
	//str = ft_split(ft_strjoin(ac-1, str+1, sep), ' ');
	
	while(*str)
	{
		if (!is_digit(**str))
		{
			printf("Error!\n");
			return (1);
		}
		str++;
	}
	
}