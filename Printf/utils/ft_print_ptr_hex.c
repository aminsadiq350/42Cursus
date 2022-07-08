/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:23:25 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:51:46 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_hex_generator(uintptr_t nbr)
{
	char	*representation;
	int		count;

	count = 0;
	representation = "0123456789abcdef";
	if (nbr >= 16)
	{
		count += ft_hex_generator(nbr / 16);
		count += ft_hex_generator(nbr % 16);
	}
	else
		count += ft_print_char(representation[nbr]);
	return (count);
}

int	ft_print_ptr_hex(uintptr_t nbr)
{
	int		count;

	count = 0;
	count += ft_print_str("0x");
	count += ft_hex_generator(nbr);
	return (count);
}
