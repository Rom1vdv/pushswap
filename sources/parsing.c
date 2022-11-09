/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rom1 <rom1@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:29:53 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/09 19:30:38 by rom1             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg_validity(char *arg)
{
	int	i;

	i = 0;
	while(arg[i])
	{
		if(!ft_isdigit(arg[i]))
			return (ERROR);
	}
}

t_list	*parse_args_to_list(char **av)
{
	int i;
	t_list *parsing_list;
	t_list *new_node;
	
	i = 0;
	parsing_list = NULL;
	while(av[i])
	{
		new_node = ft_lstnew(ft_atoi(av[i])); // verifier doublon et autre chose que chiffre
		ft_lstadd_front(&parsing_list, new_node);
		i++;
	}
	return (parsing_list);
}