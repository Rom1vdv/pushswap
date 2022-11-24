/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:05:07 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/24 17:30:24 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	debug_stack(t_list *stack)
{
	int i;

	i = 0;
	while(stack)
	{
		printf("%dth node de la liste : %d\n", i, stack->content);
		i++;
		stack = stack->next;
	}
}