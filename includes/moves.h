/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:19:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/22 17:41:54 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H
# include "../libft/libft.h"

void	swap_a(t_list **stack_a);

typedef struct s_stacks
{
	t_list *stack_a;
	t_list *stack_b;
}	t_stacks;

#endif