/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:35:19 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:35 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stacks *stacks)
{
	int	i;
	int	j;
	int	size;
	int	number;

	i = 0;
	size = stacks->size_a;
	while (!check_if_sorted(stacks->stack_a))
	{
		j = 0;
		while (j < size)
		{
			number = stacks->stack_a->index;
			if ((number >> i) & 1)
				exec_rotate(stacks, 0);
			else
				exec_push(stacks, 1);
			j++;
		}
		while (stacks->size_b)
			exec_push(stacks, 0);
		++i;
	}
}
