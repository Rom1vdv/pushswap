/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:45:52 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/16 15:56:34 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len_str;

	str = (char *)s;
	len_str = ft_strlen(str);
	while (len_str >= 0)
	{
		if (str[len_str] == (char) c)
			return (&str[len_str]);
		len_str--;
	}
	return (0);
}
