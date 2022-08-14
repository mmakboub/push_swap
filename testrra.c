/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:42:09 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/13 23:18:28 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
 
 void    ra(t_stack **stack_a)
 {
     t_stack    *top;
     t_stack    *tmp;
	 tmp = *stack_a;
     top = *stack_a;
    while (top)
     {
        if (top->next == NULL)
        {
            *stack_a = tmp->next;
        	top->next = tmp;
            tmp->next = NULL;
            break;
        }  
		top = top->next;
	 }
 }
 void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	new -> next = *alst;
	*alst = new;
}

 void rra(t_stack    **stack_a)
 {
     t_stack    *top;
     t_stack    *end;
     top = *stack_a;
     while (top)
     {
        if(top->next->next != NULL)
            top = top->next;
        else
        {
            end = top ->next;
            top->next = NULL;
            ft_lstadd_front(stack_a , end);
            break;
        }           
     }
 }
 void push(t_stack **head1, t_stack **head2)
{
	t_stack *temp;
	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
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
	node1->data = 1;
	node2->data = 2;
	node3->data = 4;
	node4->data = 6;
	noeud1->data = 5;
	noeud2->data = 25;
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
	push(&node1, &noeud1);
	tmp = node1;
	while(tmp)
    {   
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
	temp = noeud1;
	while(temp)
    {   
        printf("  \n%d", temp->data);
        temp = temp->next;
    }
}
