/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:04:33 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/21 17:39:00 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **head, t_list *new)
{
	if (head && new)
	{	
		if (*head == NULL)
			new->next = NULL;
		else
			new->next = *head;
		*head = new;
	}
}
