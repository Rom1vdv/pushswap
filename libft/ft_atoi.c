/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:18:19 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:24:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "stdio.h"
//!a verifier les valeurs negatives et loverflow//

static int	ft_iswhitespace(const char *str, int i)
{
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

static int	ft_sign(const char *str, int i, int *sign)
{
	*sign = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = 1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	int			number;
	int			saved;

	i = 0;
	sign = 0;
	number = 0;
	if (!str[0])
		exit_program();
	i = ft_iswhitespace(str, i);
	i = ft_sign(str, i, &sign);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		saved = number;
		number = 10 * number + str[i] - 48;
		i++;
		if (number - sign < saved)
			exit_program();
	}
	if (sign == 1)
		number *= -1;
	return ((int) number);
}
