/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:40:24 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/06 17:23:23 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew_node(int content)
{
	t_list	*lst_new;

	lst_new = malloc(sizeof(*lst_new));
	if (!lst_new)
		return (NULL);
	lst_new->content = content;
	lst_new->next = NULL;
	return (lst_new);
}
