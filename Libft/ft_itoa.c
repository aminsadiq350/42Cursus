/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:28:51 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/20 10:49:53 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(int n)
{
	if (n > 0)
		return (0);
	return (1);
}

static int	ft_length(int n)
{
	int	digits;

	digits = is_negative(n);
	while (n)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	length;

	nbr = n;
	if (nbr < 0)
		nbr = nbr * -1;
	length = ft_length(n);
	str = (char *)malloc(length + 1);
	if (!str)
		return (0);
	*(str + length--) = '\0';
	while (nbr > 0)
	{
		*(str + length--) = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (length == 0 && str[1] == '\0')
		*(str + length) = '0';
	if (length == 0 && str[1] != '\0')
		*(str + length) = '-';
	return (str);
}
