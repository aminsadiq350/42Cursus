/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:08:39 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/24 12:15:36 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				count; //SHOULD FIND ANOTHER WAY FOR COUNT IN LIBFT

	nbr = (unsigned int)n;
	count = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -1 * (n);
		count++;
	}
	if (nbr >= 10)
	{
		count += ft_putnbr_fd(nbr / 10, fd);
		count += ft_putnbr_fd(nbr % 10, fd);
	}
	else
	{
		ft_putchar_fd(nbr + '0', fd);
		count++;
	}
	return (count);
}
