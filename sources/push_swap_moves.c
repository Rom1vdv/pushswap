/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:17:41 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/22 17:14:10 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_list **stack_a)
{
	t_list	*tmp;
	
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
}