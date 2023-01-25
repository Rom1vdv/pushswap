/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 13:34:01 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	size_controller(t_stacks *stacks)
{
	if (stacks->size_a == 2)
		sort_stack_2(stacks, stacks->stack_a, 0);
	else if (stacks->size_a == 3)
		sort_stack_3(stacks, &stacks->stack_a, 0);
	else if (stacks->size_a <= 10)
		sort_stack_small(stacks);
	else
		radix_sort(stacks);
}

int	check_if_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stacks	*stacks;

	stacks = my_malloc(sizeof(*stacks));
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->size_a = ac - 1;
	stacks->size_b = 0;
	if (ac >= 2)
	{
		stacks->stack_a = parse_args_to_list(av);
		if (check_if_sorted(stacks->stack_a))
			exit(1);
		size_controller(stacks);
	}
	free_stacks(stacks);
	return (0);
}
