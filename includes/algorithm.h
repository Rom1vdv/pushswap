/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:53:40 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 16:28:39 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H

# include "push_swap.h"

int	check_if_sorted(t_list *stack);
int	stack_min_value(t_list *stack, int value);
int	check_which_half(t_list *stack, int value);
int	is_top(t_list *stack, int value);

#endif