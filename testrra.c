/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:42:09 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/12 23:30:44 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
 
 void    ra(t_stack **stack_a)
 {
     t_stack    *top;
     t_stack    *temp;
     top = *stack_a;
     while (top)
     {
        if(top->next != NULL)
            top = top->next;
        else
        {
            temp = *stack_a;
            *stack_a = top->next;
            top->next = temp;
            temp->next = NULL;
            break;
        }           
     }
 }
 void	ft_lstadd_front(t_list **alst, t_list *new)

{
	new -> next = *alst;
	*alst = new;
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	else
	{
		del(lst -> content);
		free(lst);
	}
}
 void rra(t_stack	**stack_a)
 {
	 t_stack    *top;
     t_stack    *end;
     top = *stack_a;
     while (top)
     {
        if(top->next != NULL)
            top = top->next;
        else
        {
            end = *stack_a;
            ft_lstadd_front(&top , end)
            ft_lstdelone(end, free(end))
            break;
        }           
     }
 }

 
 int main ()
{
	t_stack	*temp;
	t_stack	*tmp;
	t_stack *node1;
	t_stack	*node2;
	t_stack	*node3;
	t_stack	*node4;
	t_stack	*noeud1;
	t_stack	*noeud2;
	t_stack	*noeud3;
	t_stack	*noeud4;

	node1 = (t_stack *)malloc(sizeof(t_stack));
	node2 = (t_stack *)malloc(sizeof(t_stack));
	node3 = (t_stack *)malloc(sizeof(t_stack));
	node4 = (t_stack *)malloc(sizeof(t_stack));
	noeud1 = (t_stack *)malloc(sizeof(t_stack));
	noeud2 = (t_stack *)malloc(sizeof(t_stack));
	noeud3 = (t_stack *)malloc(sizeof(t_stack));
	noeud4 = (t_stack *)malloc(sizeof(t_stack));

	node1->data = 0;
	node2->data = 2;
	node3->data = 4;
	node4->data = 6;
	noeud1->data = 0;
	noeud2->data = 2;
	noeud3->data = 4;
	noeud4->data = 6;
	
	node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    noeud1->next = noeud2;
    noeud2->next = noeud3;
    noeud3->next = noeud4;
    noeud4->next = NULL;
	ra(&node1);
}
