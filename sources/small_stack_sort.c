/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:44:22 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:33:33 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_2(t_stacks *stacks, t_list *stack, int which_stack)
{
	if (stack->content > stack->next->content)
		exec_swap(stacks, which_stack);
}

void	sort_stack_3(t_stacks *stacks, t_list **stack, int which_stack)
{
	if (check_if_sorted(*stack))
		return ;
	if ((*stack)->content > (*stack)->next->content
		&& (*stack)->content > (*stack)->next->next->content)
	{
		exec_rotate(stacks, which_stack);
		sort_stack_2(stacks, *stack, which_stack);
	}
	else if ((*stack)->content > (*stack)->next->content
		&& (*stack)->content < (*stack)->next->next->content)
		exec_swap(stacks, which_stack);
	else if ((*stack)->content < (*stack)->next->content
		&& (*stack)->content > (*stack)->next->next->content)
		exec_reverse_rotate(stacks, which_stack);
	else
	{
		exec_reverse_rotate(stacks, which_stack);
		exec_swap(stacks, which_stack);
	}
}

int	get_smallest_element(t_list *stack)
{
	int	min;

	min = INT32_MAX;
	while (stack)
	{
		if (stack->index < min)
			min = stack->index;
		stack = stack->next;
	}
	return (min);
}

static void	get_elem_top(t_stacks *stacks, int target)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = stacks->stack_a;
	while (tmp->index != target && tmp)
	{
		tmp = tmp->next;
		++i;
	}
	if (!tmp)
		return ;
	if (i > stacks->size_a / 2)
	{
		while (stacks->stack_a->index != target)
			exec_reverse_rotate(stacks, 0);
	}
	else
	{
		while (stacks->stack_a->index != target)
			exec_rotate(stacks, 0);
	}
}

void	sort_stack_small(t_stacks *stacks)
{
	int	min;

	while (!check_if_sorted(stacks->stack_a))
	{
		if (stacks->size_a == 2)
		{
			sort_stack_2(stacks, stacks->stack_a, 0);
			break ;
		}
		min = get_smallest_element(stacks->stack_a);
		get_elem_top(stacks, min);
		exec_push(stacks, 1);
	}
	while (stacks->size_b)
	{
		exec_push(stacks, 0);
	}
}
