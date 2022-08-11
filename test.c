/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:50:27 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/11 02:05:16 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void push(int value, t_stack **head)
{
	t_stack *new;
	new = (t_stack *)malloc(sizeof(t_stack));
	new->data = value;
	if(*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
		new->next = *head;
	*head = new;
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
void printfList(t_stack *temp)
{
	while(temp != NULL)
	{
		printf("Element on top: %c\n", temp -> data);
		temp = temp->next;
	}
}
t_stack	*ft_lstnew(int *data)
{
	t_stack	*newelement;

	newelement = (t_stack *)malloc(sizeof(t_stack));
	if (newelement == 0)
		return (0);
	newelement->data = *data;
	newelement->next = 0;
	return (newelement);
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