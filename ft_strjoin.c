/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	x;
	size_t	len;
	size_t	j;	

	j = 0;
	i = 0;
	x = ft_strlen(s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(newstr = malloc(sizeof(char) * (len + 1))))
		return (NULL)
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}	
	while (s2[j] != '\0')
	{
		newstr[x] = s2[j];
		j++;
		x++;
	}	
	newstr[x] = '\0';
	return (newstr);
}
