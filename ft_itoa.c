/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_len(long int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i = i * -1;
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nb)
{
	char		*newstr;
	int			len;
	long int	n;

	n = nb;
	len = ft_len(n) - 1;
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (NULL);
	if (n == 0)
	{
		newstr[0] = 48;
	}
	if (n < 0)
	{
		newstr[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		newstr[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (newstr);
}
