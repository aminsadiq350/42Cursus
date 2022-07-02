/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:03:12 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/24 12:00:15 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putnbr_base(int nbr, unsigned int base_num, char *representation)
{
	unsigned int	nb;
	int				count;

	count = 0;
	nb = (unsigned int)nbr;

	if (nb >= base_num)
	{
		count += ft_putnbr_base((nb / base_num), base_num, representation);
		count += ft_putnbr_base((nb % base_num), base_num, representation);
	}
	else
	{
		ft_putchar_fd(representation[nb], 1);
		count++;
	}
	return (count);
}
