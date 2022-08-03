/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{	
		d[i] = s[i];
		i++;
	}
	return (d);
}

// int main(void)
// {
// 	char *dst = "";
// 	char *src = "holacomoestas";
// 	size_t j = 5;
// 	char *total = ft_memcpy(dst, src, j);
// 	printf("%s", total);
// 	return (0);
// }