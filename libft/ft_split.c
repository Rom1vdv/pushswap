/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <romvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:50:32 by romvan-d          #+#    #+#             */
/*   Updated: 2022/02/24 18:22:29 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	total_words;

	i = 0;
	total_words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			total_words++;
		i++;
	}
	return (total_words);
}

static size_t	ft_size_words(const char *s, char c, int current_word, int *i)
{
	size_t	j;

	*i = 0;
	j = 0;
	if (s[0] != c)
		current_word--;
	while (s[*i] && current_word > 0)
	{
		if (s[*i] == c && (s[(*i) + 1] != c && s[(*i) + 1] != '\0'))
		{
			current_word--;
		}
		(*i)++;
	}
	while (!current_word && (s[(*i) + j] != c && s[(*i) + j]))
		j++;
	return (j);
}

static char	*ft_write_words(const char *s, char *matrix, char c, int i)
{
	int	j;

	j = 0;
	while (s[i + j] != c && s[i + j])
	{
		matrix[j] = s[i + j];
		j++;
	}
	matrix[j] = '\0';
	return (matrix);
}

static char	*ft_matrix(const char *s, char c, char **matrix, int current_word)
{
	int	k;
	int	i;

	i = 0;
	k = 0;
	matrix[current_word] = malloc(sizeof(*matrix[current_word])
			* ft_size_words(s, c, current_word + 1, &i) + 1);
	if (!matrix[current_word])
	{
		while (k < current_word)
		{
			free(matrix[k]);
			k++;
		}
		free(matrix);
		return (NULL);
	}
	matrix[current_word] = ft_write_words(s, matrix[current_word], c, i);
	return (matrix[current_word]);
}

char	**ft_split(const char *s, char c)
{	
	int		total_words;
	int		current_word;
	char	**matrix;

	if (!s)
		return (NULL);
	current_word = 0;
	total_words = ft_count_words(s, c);
	matrix = malloc(sizeof(*matrix) * (total_words + 1));
	if (!matrix)
		return (NULL);
	while (current_word < total_words)
	{
		matrix[current_word] = ft_matrix(s, c, matrix, current_word);
		if (!matrix[current_word])
			return (NULL);
		current_word++;
	}
	matrix[current_word] = NULL;
	return (matrix);
}
