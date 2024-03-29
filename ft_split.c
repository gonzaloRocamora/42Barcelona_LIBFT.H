/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/09/05 18:15:37 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all_if_error(char **array)
{
	unsigned int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static unsigned int	get_nb_cols(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_cols;

	nb_cols = 0;
	if (!s[0])
		return (0);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_cols++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_cols++;
	return (nb_cols);
}

static void	get_row(char **row, unsigned int *row_len, char c)
{
	unsigned int	i;

	*row += *row_len;
	*row_len = 0;
	i = 0;
	while (**row && **row == c)
		(*row)++;
	while ((*row)[i])
	{
		if ((*row)[i] == c)
			return ;
		(*row_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**splitted;
	char			*row;
	unsigned int	i;
	unsigned int	nb_c;
	unsigned int	row_len;

	nb_c = get_nb_cols(s, c);
	splitted = malloc(sizeof(char *) * (nb_c + 1));
	if (splitted == NULL)
		return (NULL);
	row = (char *)s;
	row_len = 0;
	i = 0;
	while (i < nb_c)
	{
		get_row(&row, &row_len, c);
		splitted[i] = malloc(sizeof(char) * (row_len + 1));
		if (splitted[i] == NULL)
			return (free_all_if_error(splitted));
		ft_strlcpy(splitted[i], row, row_len + 1);
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}
