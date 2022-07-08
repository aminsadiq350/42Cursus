/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:31:34 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:51:10 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_print_nbr(int n)
{
	unsigned int	nbr;
	int				count;

	nbr = (unsigned int)n;
	count = 0;
	if (n < 0)
	{
		count += ft_print_char('-');
		nbr = -1 * (n);
	}
	if (nbr >= 10)
	{
		count += ft_print_nbr(nbr / 10);
		count += ft_print_nbr(nbr % 10);
	}
	else
		count += ft_print_char(nbr + '0');
	return (count);
}
