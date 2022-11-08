/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:42:40 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/03 14:13:01 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*mod_src;
	char	*mod_dst;

	i = 0;
	mod_src = (char *) src;
	mod_dst = (char *) dst;
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			mod_dst[len] = mod_src[len];
		}
	}
	if (src > dst)
	{
		while (i < len)
		{
			mod_dst[i] = mod_src[i];
			i++;
		}
	}
	return (dst);
}
