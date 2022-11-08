/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 1:48:5 by romvan-d          #+#    #+#             */
/*   Updated: 2022/01/10 14:4:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;
	size_t	size_src;

	i = 0;
	j = ft_strlen(dst);
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize < 1 || dstsize < size_dst)
		return (size_src + dstsize);
	while (src[i] && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (size_dst + size_src);
}
