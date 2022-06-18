/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:08:39 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/17 22:08:42 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	val;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		val = (unsigned int)(n * -1);
	}
	else
		val = (unsigned int)n;
	if (val >= 10)
		ft_putnbr_fd(val / 10, fd);
	ft_putchar_fd((char)(val % 10 + 48), fd);
}
