/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 22:07:47 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:43:41 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_print_nbr_base(int nbr, unsigned int base_num, char *representation)
{
	unsigned int	nb;
	int				count;

	count = 0;
	nb = (unsigned int)nbr;
	if (nb >= base_num)
	{
		count += ft_print_nbr_base((nb / base_num), base_num, representation);
		count += ft_print_nbr_base((nb % base_num), base_num, representation);
	}
	else
		count += ft_print_char(representation[nb]);
	return (count);
}
