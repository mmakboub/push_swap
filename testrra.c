/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:42:09 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/13 23:07:32 by mmakboub         ###   ########.fr       */
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

 
 int main ()
{
	t_stack	*tmp;
	t_stack *node1;
	t_stack	*node2;
	t_stack	*node3;
	t_stack	*node4;

	node1 = (t_stack *)malloc(sizeof(t_stack));
	node2 = (t_stack *)malloc(sizeof(t_stack));
	node3 = (t_stack *)malloc(sizeof(t_stack));
	node4 = (t_stack *)malloc(sizeof(t_stack));


	node1->data = 0;
	node2->data = 2;
	node3->data = 4;
	node4->data = 6;
	
	
	node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
	rra(&node1);
	tmp = node1;
	while(tmp)
    {   
        printf("  \n%d", tmp->data);
        tmp = tmp->next;
    }
}
