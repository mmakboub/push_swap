/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpfullfonctions3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 20:25:51 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/15 21:17:53 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"
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

size_t	ft_total(char const *s, char c)
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

char	**ft_free(char **str, int c)
{
	while (c--)
	{
		free(str[c--]);
	}
	free(str);
	return (0);
}