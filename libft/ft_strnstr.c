/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 21:33:18 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/20 19:23:05 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*mod_haystack;

	i = 0;
	mod_haystack = (char *) haystack;
	if (ft_strlen(needle) == 0)
		return (mod_haystack);
	while (mod_haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == mod_haystack[i + j] && i + j < len)
		{	
			if (needle[j + 1] == '\0')
				return (&mod_haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
