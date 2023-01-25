/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:59:50 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 13:43:24 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **stack_srs, t_list **stack_dst, char *str)
{
	t_list	*tmp;

	if (*stack_srs == NULL)
		return ;
	tmp = *stack_srs;
	*stack_srs = tmp->next;
	ft_lstadd_front(stack_dst, tmp);
	write(1, str, ft_strlen(str));
}

void	exec_push(t_stacks *stacks, int which_stack)
{
	if (!which_stack)
	{
		push(&stacks->stack_b, &stacks->stack_a, "pa\n");
		++stacks->size_a;
		--stacks->size_b;
	}
	else if (which_stack == 1)
	{
		push(&stacks->stack_a, &stacks->stack_b, "pb\n");
		--stacks->size_a;
		++stacks->size_b;
	}
}
