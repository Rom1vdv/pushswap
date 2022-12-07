/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:29:53 by romvan-d          #+#    #+#             */
/*   Updated: 2022/12/06 17:26:03 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_duplicates(int check_value, t_list *parsing_list)
{
	if (!parsing_list)	//? devrait fonctionner pour la premiere entree de la liste
		return (0);
	while (parsing_list)	//! a tester si il prend le dernier element: Edit parsing_list-> next en juste parsing_list sinon il prend pas le premier element pour comparer le duplicate
	{
		if (check_value == parsing_list->content)
			exit_program();
		parsing_list = parsing_list->next;
	}
	return (0);
}

static int	check_arg_validity(char *arg)
{
	int	i;
	
	i = 0;
	while(arg[i])
	{
		if(!ft_isdigit(arg[i]) && arg[0] != '-') //! fix le - pas en trailing (4-3)
		{
			printf("on quitte ici ou bien\n");
			exit_program();
		}
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
	
	i = 1;
	parsing_list = NULL;
	while(av[i])
	{
		if (!av[i])
			exit_program();
		if (check_arg_validity(av[i]) == 0)
		{
			value_to_parse = ft_atoi(av[i]);	//! exit si overflow a changer + verifier les doublons avec trailing zeros
			if (check_duplicates(value_to_parse, parsing_list) == 0)
			{
				new_node = ft_lstnew_node(value_to_parse);
				ft_lstadd_back(&parsing_list, new_node);
				i++;
			}
		}
	}
	return (parsing_list);
}