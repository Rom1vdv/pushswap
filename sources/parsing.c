/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:29:53 by romvan-d          #+#    #+#             */
/*   Updated: 2023/01/24 20:27:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * It checks if the value passed as an argument is already in the list
 * 
 * @param check_value the value to check for duplicates
 * @param parsing_list the list that contains the parsed values
 * 
 * @return the value of the check_value.
 */
static int	check_duplicates(int check_value, t_list *parsing_list)
{
	if (!parsing_list)
		return (0);
	while (parsing_list)
	{
		if (check_value == parsing_list->content)
			exit_program();
		parsing_list = parsing_list->next;
	}
	return (0);
}

/**
 * It checks if the argument is a valid number
 * 
 * @param arg The argument to be checked.
 * 
 * @return the value of the last expression evaluated.
 */
static int	check_arg_validity(char *arg)
{
	int	i;

	i = 0;
	if (arg[0] == '-')
		++i;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
			exit_program();
		i++;
	}
	if (i == 1 && arg[0] == '-')
		exit_program();
	return (0);
}

void	ft_convert_to_index(t_list *parsing_list)
{
	t_list	*tmp;
	t_list	*tmp_bis;

	tmp = parsing_list;
	while (tmp)
	{
		tmp_bis = parsing_list;
		while (tmp_bis)
		{
			if (tmp->content > tmp_bis->content)
				tmp->index++;
			tmp_bis = tmp_bis->next;
		}
		tmp = tmp->next;
	}
}

/**
 * It takes an array of strings as an argument,
 *  checks if the strings are valid integers
 *  converts them to integers, checks if there are duplicates,
 *  and returns a linked list of integers
 * @param av the array of strings passed to the program
 * 
 * @return A pointer to the first node of the list.
 */
t_list	*parse_args_to_list(char **av)
{
	int		i;
	int		value_to_parse;
	t_list	*parsing_list;
	t_list	*new_node;	

	i = 1;
	parsing_list = NULL;
	while (av[i])
	{
		if (!av[i])
			exit_program();
		if (check_arg_validity(av[i]) == 0)
		{
			value_to_parse = ft_atoi(av[i]);
			if (check_duplicates(value_to_parse, parsing_list) == 0)
			{
				new_node = ft_lstnew_node(value_to_parse);
				ft_lstadd_back(&parsing_list, new_node);
				i++;
			}
		}
	}
	ft_convert_to_index(parsing_list);
	return (parsing_list);
}
