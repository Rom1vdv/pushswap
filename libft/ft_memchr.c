/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:35:27 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/20 18:54:31 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_str;
	unsigned char	new_c;	

	i = 0;
	ptr_str = (unsigned char *) str;
	new_c = (unsigned char) c;
	while (i < n)
	{
		if (ptr_str[i] == new_c)
			return (&ptr_str[i]);
		i++;
	}
	return (NULL);
}
