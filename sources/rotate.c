/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:58:35 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:31:47 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **stack, char *str)
{
	t_list	*tmp;

	tmp = *stack;
	if (*stack == NULL)
		return ;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *stack;
	*stack = (*stack)->next;
	tmp->next->next = NULL;
	write(1, str, ft_strlen(str));
}

void	exec_rotate(t_stacks *stacks, int which_stack)
{
	if (!which_stack)
		rotate(&stacks->stack_a, "ra\n");
	else if (which_stack == 1)
		rotate(&stacks->stack_b, "rb\n");
	else
	{
		rotate(&stacks->stack_a, "rr\n");
		rotate(&stacks->stack_b, 0);
	}
}
