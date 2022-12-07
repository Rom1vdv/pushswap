/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:55:36 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/07 15:33:17 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_min_value(t_list *stack, int value)
{
	while(stack)
	{
		if (stack->content < value)
		{
			printf("wrong value\n");
			return (0);
		}
		stack = stack->next;
	}
	printf("hello its right\n");
	return (1);
}

int	check_which_half(t_list stack, int middle, int value)
{
	
}