/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:25:15 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/17 18:19:11 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	int				i;
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	i = 0;
	while (len > 0)
	{
		ptr[i] = c;
		i++;
		len --;
	}
	return (str);
}
