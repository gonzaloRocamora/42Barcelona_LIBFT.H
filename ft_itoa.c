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

#include <stdio.h>
#include <stdlib.h>
unsigned int ft_len(int i)
{
	int	len;

	len  = 0;
	if (i < 0)
		i = i * -1;
		len++;
	while(i > 0)
		i = i / 10;
		len++;
	return (len);
}

int *ft_itoa(int nb)
{
	char *newstr;
	long int len;
		
	len = ft_len(nb);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	while(nb == 0)
	{
		newstr[0] = 48;
	}
	while(nb < 0)
	{
		newstr[0] = '-';
		nb = nb * -1;
	}
	while(nb > 9)
	{
		newstr[len] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
	return (newstr);
}
int main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}