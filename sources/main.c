/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:31:31 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/21 14:28:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_stacks	*stacks;

	stack_b = NULL;
	stack_a = NULL;
	stacks->stack_a = stack_a;
	stacks->stack_b = stack_a;
	if (ac >= 3)
	{
		stack_a = parse_args_to_list(av);
	}
}