/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:38:39 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/28 16:00:46 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * It prints an error message and exits the program
 */
void	exit_program(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}