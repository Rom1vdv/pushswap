/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:05:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 13:43:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **stack, char *str)
{
	t_list	*tmp;

	tmp = *stack;
	if (*stack == NULL || ft_lstsize(*stack) == 1)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = (*stack);
	(*stack) = tmp->next;
	tmp->next = NULL;
	write(1, str, ft_strlen(str));
}

void	exec_reverse_rotate(t_stacks *stacks, int which_stack)
{
	if (!which_stack)
		reverse_rotate(&stacks->stack_a, "rra\n");
	else if (which_stack == 1)
		reverse_rotate(&stacks->stack_b, "rrb\n");
	else
	{
		reverse_rotate(&stacks->stack_a, "rrr\n");
		reverse_rotate(&stacks->stack_b, 0);
	}
}
