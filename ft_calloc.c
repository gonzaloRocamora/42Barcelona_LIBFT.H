/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t nsize)
{
	void	*ptr;

	ptr = malloc(nmemb * nsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nsize * nsize);
	return (ptr);
}
