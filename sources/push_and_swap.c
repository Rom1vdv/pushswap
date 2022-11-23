/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_and_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:17:41 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/23 17:58:22 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_list **stack_a)
{
	t_list	*tmp;
	
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
}

void	swap_b(t_list **stack_b)
{
	t_list	*tmp;
	
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
}

void	swap_a_and_b(t_stacks *stacks)
{
	swap_a(&stacks->stack_a);
	swap_b(&stacks->stack_b);
}

void	push_a(t_stacks *stacks)
{
	t_list *tmp;
	
	if (stacks->stack_b == NULL)
		return;
	tmp = stacks->stack_b;
	stacks->stack_b = tmp->next;
	ft_lstadd_front(&stacks->stack_a, tmp);
}

void	push_b(t_stacks *stacks)
{
	t_list *tmp;
	
	if (stacks->stack_a == NULL)
		return;
	tmp = stacks->stack_a;
	stacks->stack_a = tmp->next;
	ft_lstadd_front(&stacks->stack_b, tmp);
}