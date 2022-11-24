/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:58:35 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/24 19:04:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	
	tmp = *stack_a;
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = NULL;
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	
	tmp = *stack_b;
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = NULL;
}

void rotate_a_and_b(t_stacks *stacks)
{
	rotate_a(&stacks->stack_a);
	rotate_b(&stacks->stack_b);
}