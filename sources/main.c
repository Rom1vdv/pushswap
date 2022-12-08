/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/08 18:20:02 by romvan-d         ###   ########.fr       */
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
		// printf("%d\n", check_which_half(stacks->stack_a, 2));
		printf("%d\n", is_top(stacks->stack_a, 3));
		debug_stack(stacks->stack_a);
	}
	else if (ac == 2)
		exit_program();
}