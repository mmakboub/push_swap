/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:53:22 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/10 23:28:40 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdio.h>
# include <stdlib.h>
#include <limits.h>
typedef struct s_stack{
	int data;
	struct s_stack *next;
}t_stack;
int	ft_strlen(char *str);
int	ft_atoi(const char *str);
char	*ft_strjoin(int size, char **strs, char *sep);