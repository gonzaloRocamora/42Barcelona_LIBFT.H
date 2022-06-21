/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sorc;

	dest = dst;
	sorc = src;
	if (dest > sorc)
	{
		while (len)
		{
			len--;
			dest[len] = sorc[len];
		}
		return (dest);
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
	return (dst);
}
