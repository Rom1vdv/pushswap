/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:58:35 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/07 14:40:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "ra\n", 3);
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
	write(1, "rb\n", 3);
}

void rotate_a_and_b(t_stacks *stacks)
{
	rotate_a(&stacks->stack_a);
	rotate_b(&stacks->stack_b);
	write(1, "rr\n", 3);
}