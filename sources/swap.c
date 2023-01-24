/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:17:41 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:33:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack, char *str)
{
	t_list	*tmp;

	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
	write(1, str, ft_strlen(str));
}

void	exec_swap(t_stacks *stacks, int which_stack)
{
	if (!which_stack)
		swap(&stacks->stack_a, "sa\n");
	else if (which_stack == 1)
		swap(&stacks->stack_b, "sb\n");
	else
	{
		swap(&stacks->stack_a, "ss\n");
		swap(&stacks->stack_b, 0);
	}
}
