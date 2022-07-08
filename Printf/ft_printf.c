/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:11:18 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:39:35 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include "utils/utils.h"

static	int	ft_format_parser(const char *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (*str == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (*str == 'p')
		count += ft_print_ptr_hex(va_arg(args, uintptr_t));
	else if (*str == 'i' || *str == 'd')
		count += ft_print_nbr(va_arg(args, int));
	else if (*str == 'u')
		count += ft_print_nbr_base(va_arg(args, int), 10, "0123456789");
	else if (*str == 'x')
		count += ft_print_nbr_base(va_arg(args, int),
				16, "0123456789abcdef");
	else if (*str == 'X')
		count += ft_print_nbr_base(va_arg(args, int),
				16, "0123456789ABCDEF");
	else if (*str == '%')
		count += ft_print_char(*str);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			count += ft_format_parser(str++, args);
		}
		else if (*str == '%')
			str++;
		else
			count += ft_print_char(*str++);
	}
	va_end(args);
	return (count);
}
