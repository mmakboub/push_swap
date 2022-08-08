/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:57:21 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/08 23:31:06 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcal_size(int size, char **str, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	len += (ft_strlen(sep) * (size - 1)) + 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*my_str;

	i = 0;
	if (size == 0)
	{
		my_str = malloc(sizeof(char));
		*my_str = 0;
		return (my_str);
	}
	my_str = (char *)malloc(sizeof(char) * ft_strcal_size(size, strs, sep));
	if (!(my_str))
		return (0);
	*my_str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(my_str, strs[i]);
		if (i < size - 1)
			ft_strcat(my_str, sep);
		i++;
	}
	return (my_str);
}
char	*ft_substr(char *s, unsigned int start, size_t len)

{
	size_t	firstc;
	char	*newstr;

	firstc = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		newstr = malloc(1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	while (firstc < len && start < ft_strlen(s))
	{
		newstr[firstc++] = s[start++];
	}
	newstr[firstc] = '\0';
	return (newstr);
}

static size_t	ft_total(char const *s, char c)
{
	size_t	n_wrd;

	n_wrd = 0;
	while (*s)
	{
		if (*s != c)
		{
			n_wrd++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (n_wrd);
}

static char	**ft_free(char **str, int c)
{
	while (c--)
	{
		free(str[c--]);
	}
	free(str);
	return (0);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	len;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_total(s, c) + 1));
	if (!str)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
			str[i++] = ft_substr(s, 0, len);
		if (len != 0 && !str[i - 1])
			return (ft_free(str, i - 1));
		s += len;
	}
	str[i] = NULL;
	return (str);
}

int ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

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
void	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
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
int checking_sorting(t_stack **stack_a)
{
	t_stack *temp;
	temp = (*stack_a);
	while(temp || temp->next)
	{
		printf("hiiiiii");
		if (temp->data > temp->next->data)
			return(ft_putstr("ur stck is sorted !!"), 0);
		temp = temp->next;
	}
	return (1);
}

int main (int ac, char **av)
{
	char	**str;
	char	*sep;
	int		i;
    int 	y;

    i = 0;
    y = 0;
	sep = " ";
	str = ft_split(ft_strjoin(ac - 1, av + 1, sep), ' ');
	checking_array(str);
	checking_sorting(str);
	if(!checking_double(str))
		return(printf("error1\n"), 0);
	while(str[i])
	{
		y =  0;
		while(str[i][y])
		{
			printf("tab[%d][%d] = %c\n", i,y, str[i][y]);
			y++;
		}
		i++;
	}
	return (0);
}