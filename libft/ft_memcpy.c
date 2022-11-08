/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:05:58 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/23 21:06:59 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*mod_dst;
	unsigned char	*mod_src;

	i = 0;
	mod_dst = (unsigned char *) dst;
	mod_src = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	while (len > 0)
	{
		mod_dst[i] = mod_src[i];
		i++;
		len--;
	}
	return (dst);
}

int main(void)
{
	
}