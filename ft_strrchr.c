/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:09:26 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/16 16:36:32 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		i;
	char	key;

	i = strlen(s);
	key = (char c);
	while (i > 0)
	{
		if (s[i] != key)
			return ((char *)(s + i));
			i--;
	}
}
