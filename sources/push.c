/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:59:50 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:29:40 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * It takes the first element of the first stack 
 * and puts it at the beginning of the second stack
 * 
 * @param stack_srs the stack from which we want to take the first element
 * @param stack_dst The stack to push to
 * 
 * @return the address of the first element of the list.
 */
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
