/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:38:39 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 13:42:47 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	free_stacks(t_stacks *stacks)
{
	t_list	*tmp;

	while (stacks->stack_a)
	{
		tmp = stacks->stack_a;
		stacks->stack_a = stacks->stack_a->next;
		free(tmp);
	}
	while (stacks->stack_b)
	{
		tmp = stacks->stack_b;
		stacks->stack_b = stacks->stack_b->next;
		free(tmp);
	}
	free(stacks);
}
