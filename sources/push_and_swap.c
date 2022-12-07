/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:17:41 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/07 14:39:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **stack_a)
{
	t_list	*tmp;
	
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **stack_b)
{
	t_list	*tmp;
	
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "sb\n", 3);
}

void	swap_a_and_b(t_stacks *stacks)
{
	swap_a(&stacks->stack_a);
	swap_b(&stacks->stack_b);
	write(1, "ss\n", 3);
}

void	push_a(t_stacks *stacks)
{
	t_list *tmp;
	
	if (stacks->stack_b == NULL)
		return;
	tmp = stacks->stack_b;
	stacks->stack_b = tmp->next;
	ft_lstadd_front(&stacks->stack_a, tmp);
	write(1, "pa\n", 3);
}

void	push_b(t_stacks *stacks)
{
	t_list *tmp;
	
	if (stacks->stack_a == NULL)
		return;
	tmp = stacks->stack_a;
	stacks->stack_a = tmp->next;
	ft_lstadd_front(&stacks->stack_b, tmp);
	write(1, "pb\n", 3);
}