#include "pushswap.h"

// void sort_tab(int *tab, int sz)
// {
// 	int i;
// 	int y;
// 	int temp;

// 	while (i < sz - 1)
// 	{
// 		y = i + 1;
// 		while (y < sz)
// 		{
// 			if (tab[i] > tab[y])
// 			{
// 				temp = tab[i];
// 				tab[i] = tab[y];
// 				tab[y] = temp;
// 			}
// 			y++;
// 		}
// 		i++;
// 	}
// }

// void getRightIndex(t_stack *stack)
// {
// 	t_stack *temp;
// 	t_stack *temp2;
// 	int *tab;
// 	temp = stack;
// 	int i;
// 	int sz = ft_lstsize(temp);

// 	tab = malloc(sizeof(int) * sz);
// 	if (!tab)
// 		return NULL;
// 	i = 0;
// 	while (temp)
// 	{
// 		tab[i++] = temp->data;
// 		temp = temp->next;
// 	}
// 	sort_tab(tab, sz);

// }
t_stack	*finding_min2(t_stack	*stack_a)
{
	int		indice;
	t_stack		*min;
	t_stack	*top;

	indice = 1;
	top = stack_a;
	while (top)
	{
		if (indice == 1 && top->index == -1)
		{
			min = top;
			indice = 0;
		}
		else
		{
			if (min->data > top->data && top->index == -1)
				min = top;
		}
		top = top->next;
	}
	return (min);
}

void getAllIndex(t_stack *stack)
{
	t_stack *temp;
	int i;

	temp = stack;
	int sz = ft_lstsize(temp);
	while (temp)
	{
		temp->index = -1;
		temp = temp->next;
	}
	temp = stack;
	i = 0;
	t_stack *stack2;
	stack2 = stack;
	while (i < sz)
		finding_min2(temp)->index = i++;
}