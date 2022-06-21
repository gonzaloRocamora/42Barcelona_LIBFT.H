/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strdup.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/16 16:36:32 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size] != '\0')
		size++;
	if (!(new == malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (*str)
	{
		new[i++] = *str++;
	new[i] = '\0';
	}
	return (new);
}
