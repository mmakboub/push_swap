/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:50:27 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/14 20:20:06 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void push(int value, t_stack **head1, t_stack **head2)
{
	t_stack *temp;
	temp = *head1;
	*head1 = temp->next;
	temp->next = *head2;
	*head2 = temp;
}
void	ft_swap(int *x , int *y, t_stack *head)
{
	int swap;
	if(head && head->next)
	{
		swap = *x;
		*x = *y;
		*y = swap;
	}
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
	int a = 1;
	int b = 2;
	//int c = 3;
	//int d = 4;
	t_stack	*node1 = ft_lstnew(&a);
	t_stack	*node2 = ft_lstnew(&b);
	//t_stack	*node3 = ft_lstnew(&c);
	//t_stack	*node4 = ft_lstnew(&d);

	node1->next = node2;
	node2->next = NULL;
	//node3->next = node4;
	//node4->next = NULL;
	printf("before ---> content: %d-->next: %d\n", node1->data, node2->data);
	ft_swap(&node1->data, &node1->next->data , node1);
	printf("after ---> content: %d-->next: %d", node1->data, node2->data);
	return (0);
}