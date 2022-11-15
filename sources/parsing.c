/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:29:53 by romvan-d          #+#    #+#             */
/*   Updated: 2022/11/15 19:45:40 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_duplicates(int check_value, t_list *parsing_list)
{
	if (!parse_args_to_list)
		return (0);
	while(parsing_list->next)//! a tester si il prend le dernier element
	{
		if (check_value == parsing_list->content)
			return (ERROR);
		parsing_list = parsing_list->next;
	}
	return (0);
}

int	check_arg_validity(char *arg)
{
	int	i;
	
	i = 0;
	while(arg[i])
	{
		if(!ft_isdigit(arg[i]))
			return (ERROR);
		i++;
	}
	return (0);
}

t_list	*parse_args_to_list(char **av)
{
	int 	i;
	int		value_to_parse;
	t_list	*parsing_list;
	t_list	*new_node;	
	
	i = 0;
	parsing_list = NULL;
	while(av[i])
	{
		if (check_arg_validity(av[i]) == 0)
		{
			value_to_parse = ft_atoi(av[i]);
			if (check_duplicates(value_to_parse, parsing_list) == 0)
			{
				new_node = ft_lstnew(value_to_parse);
				ft_lstadd_front(&parsing_list, new_node);
				i++;
			}
		}
	}
	return (parsing_list);
}