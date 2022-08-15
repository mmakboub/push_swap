/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:53:22 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/15 22:23:33 by mmakboub         ###   ########.fr       */
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
int				ft_strlen(char *str);
int				ft_atoi(const char *str);
char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_lstsize(t_stack *lst);
void			ft_lstadd_back(t_stack **alst, t_stack *new);
void			add_to_stack(t_stack	**stack_a, char **str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_substr(char *s, unsigned int start, size_t len);
void			ft_lstadd_front(t_stack **alst, t_stack *new);
t_stack			*ft_lstnew(int data);
int				ft_strcal_size(int size, char **str, char *sep);
void			ft_putstr(char *s);
char			**ft_split(char *s, char c);
int 			ft_isdigit(int x);
int				ft_atoi(const char *str);
int				ft_strlen(char *str);
void			sorting3(t_stack **head , int lenght);
int				checking_array(char **str);
int				checking_double(char **str);
int 			checking_sorting(t_stack *stack_a);
void   			ra(t_stack **stack_a, char *str);
void 			rra(t_stack    **stack_a, char *str);
void 			push(t_stack **head1, t_stack **head2);
void			ft_swap(int *x , int *y, t_stack **head , char *str);
char	**ft_free(char **str, int c);
size_t	ft_total(char const *s, char c);
