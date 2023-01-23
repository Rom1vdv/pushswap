/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:19:28 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 16:20:50 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H
# include "../libft/libft.h"

typedef struct s_stacks
{
	t_list *stack_a;
	int	size_a;
	t_list *stack_b;
	int size_b;
}	t_stacks;

/* Swap moves */

void	swap(t_list **stack, char *str);
void	exec_swap(t_stacks *stacks, int which_stack);

/* Push moves */

void	push(t_list **stack_srs, t_list **stack_dst, char *str);
void	exec_push(t_stacks *stacks, int which_stack);

/* Rotate moves */

void	rotate(t_list **stack, char *str);
void	exec_rotate(t_stacks *stacks, int which_stack);

/* Reverse Rotate Moves */

void	reverse_rotate(t_list **stack, char *str);
void	exec_reverse_rotate(t_stacks *stacks, int which_stack);

#endif