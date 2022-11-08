/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:45:57 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/15 18:51:10 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_link;

	if (lst && new)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_link = ft_lstlast(*lst);
			last_link->next = new;
		}
	}
}
