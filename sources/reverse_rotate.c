/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:05:39 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/07 14:40:06 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	
	tmp = *stack_a;
	while(tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next->next = (*stack_a);
    (*stack_a) = tmp->next;
    tmp->next = NULL;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	
	tmp = *stack_b;
	while(tmp->next->next)
	{
		tmp = tmp->next;
	}
	tmp->next->next = (*stack_b);
    (*stack_b) = tmp->next;
    tmp->next = NULL;
	write(1, "rrb\n", 4);
}

void	reverse_rotate_a_and_b(t_stacks *stacks)
{
	reverse_rotate_a(&stacks->stack_a);
	reverse_rotate_b(&stacks->stack_b);
	write(1, "rrr\n", 4);
}