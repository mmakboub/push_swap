/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:53:22 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/26 18:09:07 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
//# include "./get_next_line/get_next_line.h"

typedef struct s_stack{
	int				data;
	int				index;
	struct s_stack	*next;
}t_stack;

size_t			ft_strlen(const char *str);
int				ft_atoi(const char *str);
char			*ft_strjoin(int size, char **strs, char *sep);
int				ft_lstsize(t_stack *lst);
void			ft_lstadd_back(t_stack **alst, t_stack *new);
void			add_to_stack(t_stack	**stack_a, char **str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_substr(char *s, unsigned int start, size_t len);
void			ft_lstadd_front(t_stack **alst, t_stack *new);
t_stack			*ft_lstnew(int data, int index);
int				ft_strcal_size(int size, char **str, char *sep);
void			ft_putstr(char *s);
char			**ft_split(char *s, char c);
int				ft_isdigit(int x);
int				ft_atoi(const char *str);
void			sorting3(t_stack **head, int lenght);
int				checking_array(char **str);
int				checking_double(char **str);
int				checking_sorting(t_stack *stack_a);
void			ra(t_stack **stack_a, char *str);
void			rra(t_stack **stack_a, char *str);
void			push(t_stack **head1, t_stack **head2, char *str);
void			ft_swap(t_stack **head, char *str);
char			**ft_free(char **str, int c);
void			sorting4(t_stack **stack_a, t_stack	**stack_b, int len);
void			sorting5(t_stack **stack_a, t_stack	**stack_b, int len);
size_t			ft_total(char const *s, char c);
int				finding_min(t_stack	*stack_a);
void			indexing(t_stack *stack_a);
void			ss(t_stack **stack_a, t_stack **stack_b, char *str);
void			rr(t_stack **stack_a, t_stack **stack_b, char *str);
void			rrr(t_stack **stack_a, t_stack **stack_b, char *str);
void			getallindex(t_stack *stack);
void			algo(t_stack **stack_a, t_stack	**stack_b);
t_stack			*finding_min2(t_stack	*stack_a);

#endif
