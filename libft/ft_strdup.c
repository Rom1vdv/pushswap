/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:00:27 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/23 21:37:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*copied_str;

	i = 0;
	if (!str)
		return (NULL);
	copied_str = malloc(sizeof(*copied_str) * ft_strlen(str) + 1);
	if (!copied_str)
		return (NULL);
	while (str[i])
	{
		copied_str[i] = str[i];
		i++;
	}
	copied_str[i] = '\0';
	return (copied_str);
}
