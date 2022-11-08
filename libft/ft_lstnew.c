/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:40:24 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/16 14:54:56 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_new;

	lst_new = malloc(sizeof(*lst_new));
	if (!lst_new)
		return (NULL);
	lst_new->content = (void *)content;
	lst_new->next = NULL;
	return (lst_new);
}
