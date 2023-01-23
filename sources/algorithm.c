/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:55:36 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 16:14:10 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"

// int	stack_min_value(t_list *stack, int value)
// {
// 	while(stack)
// 	{
// 		if (stack->content < value)
// 		{
// 			printf("wrong value\n");
// 			return (1);
// 		}
// 		stack = stack->next;
// 	}
// 	printf("hello its right\n");
// 	return (0);
// }

// /* Checking if the value is in the first half or the second half of the stack. */
// int	check_which_half(t_list *stack, int value)
// {
// 	int	size;
// 	int	middle;
// 	int	count;
	
// 	size = ft_lstsize(stack);
// 	middle = size / 2;
// 	count = 0;
// 	while (stack)
// 	{
// 		if (stack->content == value)
// 		{
// 			if (count <= middle)
// 				return (-1);
// 			else if (count > middle && count <= size)
// 				return (1);
// 		}
// 		count++;
// 		stack = stack->next;
// 	}
// 	return (0);
// }

// int	is_top(t_list *stack, int value)
// {
// 	if (stack->content == value)
// 		return (1);
// 	return (0);
// }

// void	optimize_move(t_list *stack, int value)
// {
// 	int	moves_count;

// 	moves_count = 0;
// 	while(!is_top(stack, value))
// 	{
// 		if (check_which_half(stack, value) == 1)
// 		{
// 			reverse_rotate(&stack);
// 			moves_count++;
// 		}
// 		else if (check_which_half(stack, value) == -1)
// 		{
// 			rotate(&stack);
// 			moves_count++;
// 		}
// 	}
// }
