/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:55:06 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 19:59:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SMALL_SORT_H
# define SMALL_SORT_H

void	sort_stack_2(t_stacks *stacks, t_list *stack, int which_stack);
void	sort_stack_3(t_stacks *stacks, t_list **stack, int which_stack);
void	sort_stack_small(t_stacks *stacks);

#endif