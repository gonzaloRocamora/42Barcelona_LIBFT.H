/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*haystack;
	size_t	i;
	size_t	j;
	size_t	size;

	i = -1;
	if (!(size == ft_strlen(needle)))
		return ((char *) haystack);
	while (haystack[++i] && i < n)
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j < n))
		{
			if (j == size - 1)
				return ((char *)(haystack + i));
			j++;
		}
	}
	return (NULL);
}
