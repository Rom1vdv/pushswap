/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:44:22 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 16:30:08 by romvan-d         ###   ########.fr       */
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

static int	get_position(t_stacks *stacks)
{
	t_list *tmp;
	int		i;

	i = 0;
	tmp = stacks->stack_a;
	while(tmp && tmp->index < stacks->stack_b->index)
	{
		++i;
		tmp = tmp->next;
	}
	if (i > stacks->size_a / 2)
		i = - (stacks->size_a - i);
	return (i);
}

void	insert_back(t_stacks *stacks)
{
	int	rotate_counter;
	int i;

	i = 0;
	rotate_counter = get_position(stacks);
	while(i < rotate_counter)
	{
		exec_rotate(stacks, 0);
		++i;
	}
	while (i > rotate_counter)
	{
		exec_reverse_rotate(stacks, 0);
		--i;
	}
	exec_push(stacks, 0);
}

void	put_first_index_on_top(t_stacks *stacks)
{
	int	i;
	int	rotate_counter;
	t_list *tmp;
	
	i = 0;
	tmp = stacks->stack_a;
	rotate_counter = 0;
	while (tmp->content)
	{
		++rotate_counter;
		tmp = tmp->next;
	}
	if (rotate_counter > stacks->size_a / 2)
		rotate_counter = - (stacks->size_a - rotate_counter);
	while(i < rotate_counter)
	{
		exec_rotate(stacks, 0);
		++i;
	}
	while (i > rotate_counter)
	{
		exec_reverse_rotate(stacks, 0);
		--i;
	}
}

void	sort_stack_5(t_stacks *stacks)
{
	
	exec_push(stacks, 1);
	exec_push(stacks, 1);
	sort_stack_3(stacks, &stacks->stack_a, 0);
	// debug_stack(stacks->stack_a);
	insert_back(stacks);
	while(stacks->stack_a->index)
	{
		exec_rotate(stacks, 0);
	}
	// debug_stack(stacks->stack_a);
	insert_back(stacks);
	while(stacks->stack_a->index)
	{
		exec_rotate(stacks, 0);
	}
}