/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:19:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/23 19:05:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H
# include "../libft/libft.h"

typedef struct s_stacks
{
	t_list *stack_a;
	t_list *stack_b;
}	t_stacks;

/* Swap moves */

void	swap_a(t_list **stack_a);
void	swap_b(t_list **stack_b);
void	swap_a_and_b(t_stacks *stacks);

/* Push moves */

void	push_a(t_stacks *stacks);
void	push_b(t_stacks *stacks);

/* Rotate moves */

void	rotate_a(t_list **stack_a);


#endif