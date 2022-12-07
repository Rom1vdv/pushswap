/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/07 14:58:37 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(*stacks)); //! ABSOLUMENT REFAIRE MA STRUCTURE 
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	if (ac >= 3)
	{
		stacks->stack_a = parse_args_to_list(av);
		stack_min_value(stacks->stack_a, 2);
		debug_stack(stacks->stack_a);
		reverse_rotate_a(&stacks->stack_a);
		debug_stack(stacks->stack_a);
	}
	else if (ac == 2)
		exit_program();
}