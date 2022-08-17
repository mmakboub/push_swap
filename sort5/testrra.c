/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:42:09 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/16 20:56:06 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "pushswap.h"
# include <unistd.h>
#include <stdio.h>
# include <stdlib.h>
#include <limits.h>
 typedef struct s_stack{
	int data;
	struct s_stack *next;
}t_stack;
void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	new -> next = *alst;
	*alst = new;
}
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

 void rra(t_stack    **stack_a, char *str)
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
	 printf("%s", str);
 }
 void push(t_stack **head1, t_stack **head2)
{
	t_stack *temp;
	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
}

int finding_min(t_stack	**stack_a)
 {
	 int indice;
	 int min;
	 t_stack	*top;
	 indice = 1;
	 top = *stack_a;
	 printf("mariam");
	 while(stack_a)
	 {
		 if(indice == 1)
		 {
			 min = (*stack_a)->data;
			 indice = 0;
		 }
		 else 
		 {
		 	if(min > (*stack_a)->data)
			 	min = (*stack_a)->data;
		 }
		top = top->next;
	 }
	 return(min);
 }
 
 int main ()
{
	

	t_stack *node1;
	t_stack	*node2;
	t_stack	*node3;
	t_stack	*node4;

	node1 = (t_stack *)malloc(sizeof(t_stack));
	node2 = (t_stack *)malloc(sizeof(t_stack));
	node3 = (t_stack *)malloc(sizeof(t_stack));
	node4 = (t_stack *)malloc(sizeof(t_stack));

	node1->data = 1;
	node2->data = 2;
	node3->data = 4;
	node4->data = 6;
	
	
	node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    printf("mariam");
    node4->next = NULL;
	finding_min(&node1);

}
