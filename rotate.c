/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:30:48 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/02/21 17:40:08 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_elem **a)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*a || !(*a)->next))
		return;
	temp = *a;
	*a = (*a)->next;
	last = *a;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	ft_printf("ra\n");
}

void	rb(t_elem **b)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*b || (*b)->next))
		return;
	temp = *b;
	*b = (*b)->next;
	last = *b;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
	ft_printf("rb\n");
}

void	ra_no_print(t_elem **a)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*a || !(*a)->next))
		return;
	temp = *a;
	*a = (*a)->next;
	last = *a;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
}

void	rb_no_print(t_elem **b)
{
	t_elem	*temp;
	t_elem	*last;

	if(!(*b || (*b)->next))
		return;
	temp = *b;
	*b = (*b)->next;
	last = *b;
	while(last->next)
		last = last->next;
	last->next = temp;
	temp->next = NULL;
}

void	rr(t_elem **a, t_elem **b)
{
	ra_no_print(a);
	rb_no_print(b);
	ft_printf("rr\n");
}

/* void print_stack(t_elem *stack)
{
	while(stack)
	{
		printf("%d", stack->num);
		stack = stack->next;
	}
	printf("\n");
}

t_elem *new_node(int num)
{
	t_elem	*node;
	
	node = malloc(sizeof(t_elem));
	if (node)
	{
		node->num = num;
		node->next = NULL;
	}
	return (node);
}

int main() 
{

    t_elem *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);

	 t_elem *b = new_node(4);
    b->next = new_node(5);
    b->next->next = new_node(6);

    printf("Pilha a antes do 'ra': ");
    print_stack(a);
	printf("Pilha b antes do 'rb': ");
	print_stack(b);

    rr(&a, &b);

    printf("Pilha a depois do 'ra': ");
    print_stack(a);
	printf("Pilha a depois do 'rb': ");
	print_stack(b);

    return 0;
} */