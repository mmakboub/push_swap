/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:52:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/26 17:27:41 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_BONUS_H
# define PUSHSWAP_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "./get_next_line/get_next_line.h"

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
int				checking_array(char **str);
int				checking_double(char **str);
int				checking_sorting(t_stack *stack_a);
void			rotate(t_stack **stack_a);
void			reverse_rotate(t_stack **stack_a);
void			ft_push(t_stack **head1, t_stack **head2);
void			ft_swap(t_stack **head);
char			**ft_free(char **str, int c);
size_t			ft_total(char const *s, char c);
void			ss(t_stack **stack_a, t_stack **stack_b);
void			rr(t_stack **stack_a, t_stack **stack_b);
void			rrr(t_stack **stack_a, t_stack **stack_b);
int				ft_strcmp(char *s1, char *s2);
void			apl_instc(char *str, t_stack **stack_a, t_stack **stack_b);
void			check_instructions(char *str);

#endif