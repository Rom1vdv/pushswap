/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/22 17:59:27 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(*stacks));
	stacks->stack_a = NULL;
	if (ac >= 3)
	{
		stacks->stack_a = parse_args_to_list(av);
		debug_stack(stacks->stack_a);
		swap_a(&stacks->stack_a);
		debug_stack(stacks->stack_a);
	}
}