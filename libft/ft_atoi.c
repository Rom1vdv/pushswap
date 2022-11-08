/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:18:19 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/23 20:54:13 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static int	ft_check_overflow(long int number, int sign)
{
	if (sign == 1 && number < 0)
		return (0);
	if (sign == 0 && number < 0)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	number;

	i = 0;
	sign = 0;
	number = 0;
	i = ft_iswhitespace(str, i);
	i = ft_sign(str, i, &sign);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		number *= 10;
		number += str[i] - 48;
		i++;
		if (ft_check_overflow(number, sign) <= 0)
			return (ft_check_overflow(number, sign));
	}
	if (sign == 1)
		number *= -1;
	return ((int) number);
}
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi("hello"));
}
