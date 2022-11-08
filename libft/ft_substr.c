/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 19:51:28 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/23 21:37:52 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_substr(char *sub_str, size_t start,
		size_t len, size_t str_len)
{	
	if (start > str_len)
		return (ft_calloc(1, sizeof(char)));
	if (len > (str_len - start))
		sub_str = malloc(sizeof(*sub_str) * (str_len - start + 1));
	else if (len <= (str_len - start))
		sub_str = malloc(sizeof(*sub_str) * len + 1);
	if (!sub_str)
		return (NULL);
	return (sub_str);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;
	size_t	j;
	size_t	str_len;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	sub_str = NULL;
	str_len = ft_strlen(str);
	sub_str = ft_malloc_substr(sub_str, (size_t) start, len, str_len);
	if (!sub_str)
		return (NULL);
	while (str[i] && start < str_len)
	{
		while (i == start && j < len && str[i + j])
		{
			sub_str[j] = str[i + j];
			j++;
		}
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
