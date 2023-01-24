/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:45:57 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:23:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*last_link;

	if (head && new)
	{
		if (*head == NULL)
			*head = new;
		else
		{
			last_link = ft_lstlast(*head);
			last_link->next = new;
		}
	}
}
