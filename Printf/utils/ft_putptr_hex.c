/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:03:30 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/24 11:56:53 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putptr_hex(uintptr_t nbr)
{
	char	*representation;
	int		count;

	count = 0;
	representation = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_putptr_hex(nbr / 16);
		count += ft_putptr_hex(nbr % 16);
	}
	else
	{
		ft_putchar_fd(representation[nbr], 1);
		count++;
	}
	return (count);

}
