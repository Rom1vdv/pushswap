/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:57:19 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/21 15:01:47 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_len(long long int i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		count++;
	while (i)
	{	
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*itoa;
	int				len;
	long long int	nb;

	nb = n;
	len = ft_number_len(nb);
	itoa = malloc(sizeof(*itoa) * len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		itoa[0] = '-';
	}
	if (nb == 0)
		itoa[0] = '0';
	while (nb > 0)
	{
		len--;
		itoa[len] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (itoa);
}
