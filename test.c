/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 17:50:27 by mmakboub          #+#    #+#             */
/*   Updated: 2022/08/09 23:48:39 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"pushswap.h"

void push(char value, t_stack **head)
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
void	ft_swap(t_stack **head, int x , int y)
{
	t_stack *headtmp = *head;
	t_stack *temp;
	x = 

	temp = headtmp->next;
	headtmp->next = temp->next;
	temp->next = headtmp;
	
}


int main()
{
	t_stack *toop ;
	toop = (t_stack *)malloc(sizeof(t_stack));
	toop->data = 'a';
	toop->next = NULL;
	push ('b',&toop);
	push ('b',&toop);
	push ('b',&toop);
	push ('b',&toop);
	push ('b',&toop);
	t_stack *temp = toop;
	while(temp != NULL)
	{
		printf("Element on top: %c\n", temp -> data);
		temp = temp->next;
	}
}