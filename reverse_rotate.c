/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:33:53 by ymaia-do          #+#    #+#             */
/*   Updated: 2025/02/21 17:37:22 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_elem **a)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*a) || !((*a)->next))
		return;
	second_last = *a;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
	ft_printf("rra\n");
}

void	rrb(t_elem **b)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*b || !(*b)->next))
		return;
	second_last = *b;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
	ft_printf("rrb\n");
}

void	rra_no_print(t_elem **a)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*a) || !((*a)->next))
		return;
	second_last = *a;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *a;
	*a = last;
}

void	rrb_no_print(t_elem **b)
{
	t_elem	*last;
	t_elem	*second_last;

	if(!(*b || !(*b)->next))
		return;
	second_last = *b;
	while(second_last->next && second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *b;
	*b = last;
}

void	rrr(t_elem **a, t_elem **b)
{
	rra_no_print(a);
	rrb_no_print(b);
	ft_printf("rrr\n");
}
/* 
void print_stack(t_elem *stack)
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
#include <stdio.h>

int main() 
{

    t_elem *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);

	 t_elem *b = new_node(4);
    b->next = new_node(5);
    b->next->next = new_node(6);

    printf("Pilha a antes do 'rra': ");
    print_stack(a);
	printf("Pilha b antes do 'rrb': ");
	print_stack(b);

    rrr(&a, &b);

    printf("Pilha a depois do 'rra': ");
    print_stack(a);
	printf("Pilha a depois do 'rrb': ");
	print_stack(b);

    return 0;
} */