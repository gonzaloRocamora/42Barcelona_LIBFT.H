/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*ft_memchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocamor <grocamor@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:38:19 by grocamor          #+#    #+#             */
/*   Updated: 2022/01/11 12:38:23 by grocamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

void	ft_putnbr_fd(int n, int fd)
{
	long	newInt;

	newInt = (long)n;
	if (newInt < 0)
	{
		write(fd, '-', 1);
		newInt = newInt * -1;
	}	
	if (newInt > 9)
	{
		ft_putnbr_fd(newInt / 10 , fd);
		ft_putchar_fd((newInt % 10) + 48, fd);
	}
	ft_putnbr_fd((newInt % 10) + '0', fd);
}