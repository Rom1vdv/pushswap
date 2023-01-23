/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 17:48:45 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_if_sorted(t_list *stack)
{
	while(stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int main(int ac, char **av)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(*stacks));
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->size_a = ac - 1;
	stacks->size_b = 0;
	if (ac >= 2)
	{
		stacks->stack_a = parse_args_to_list(av);
		if (check_if_sorted(stacks->stack_a))
			return (0);
		debug_stack(stacks->stack_a);
		sort_stack_5(stacks);
		debug_stack(stacks->stack_a);
	}
	exit(0);
	return (0);
}