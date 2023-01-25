/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:05:07 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/25 11:37:51 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*my_malloc(size_t size)
{
	void	*tmp;

	tmp = malloc(size);
	if (tmp == NULL)
	{
		exit(1);
	}
	return (tmp);
}
