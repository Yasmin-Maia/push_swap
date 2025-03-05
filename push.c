/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasmin <yasmin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:26:46 by yasmin            #+#    #+#             */
/*   Updated: 2025/02/26 17:14:48 by yasmin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_elem **b, t_elem **a)
{
	t_elem	*temp;

	if(*a == NULL)
		return;
	temp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = temp;
	ft_printf("pb\n");
}

void	pa(t_elem **a, t_elem **b)
{
	t_elem	*temp;

	if(*b == NULL)
		return;
	temp = (*b)->next;
	(*b)->next = *a;
	*a = *b;
	*b = temp;
	ft_printf("pa\n");
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

int main() 
{

    t_elem *a = new_node(1);
    a->next = new_node(2);
    a->next->next = new_node(3);

	 t_elem *b = new_node(4);
    b->next = new_node(5);
    b->next->next = new_node(6);

    printf("Pilha a antes do 'pa': ");
    print_stack(a);
	printf("Pilha b antes do 'pb': ");
	print_stack(b);

	pb(&b, &a);
	printf("Pilha a depois do 'pb': ");
    print_stack(a);
	printf("Pilha b depois do 'pb': ");
	print_stack(b);

    pa(&a, &b);
    printf("Pilha a depois do 'pa': ");
    print_stack(a);
	printf("Pilha b depois do 'pa': ");
	print_stack(b);


    return 0;
} */ 
