/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:11:18 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/24 17:31:20 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include "utils/utils.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	char	*ptr;
	int		status;

	va_start(args, str);
	count = 0;
	status = 1;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			if (*str == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				count++;
			}
			else if (*str == 's')
			{
				ptr = va_arg(args, char *);
				if (ptr == NULL)
				{
					count += 6;
					ft_putstr_fd("(null)", 1);
				}
				else
				{
					ft_putstr_fd(ptr, 1);
					count += ft_strlen(ptr);
				}
			}
			else if (*str == 'p')
			{
				ft_putstr_fd("0x", 1);
				count += 2;
				count += ft_putptr_hex(va_arg(args, uintptr_t));
			}
			else if (*str == 'i' || *str == 'd')
				count += ft_putnbr_fd(va_arg(args, int), 1);
			else if (*str == 'u')
				count += ft_putnbr_base(va_arg(args, int), 10, "0123456789");
			else if (*str == 'x')
				count += ft_putnbr_base(va_arg(args, int),
						16, "0123456789abcdef");
			else if (*str == 'X')
				count += ft_putnbr_base(va_arg(args, int),
						16, "0123456789ABCDEF");
			else if (*str == '%')
			{
				ft_putchar_fd(*str, 1);
				count++;
			}
			str++;
		}
		else
		{
			if (*str == '%')
			{
				// count++;
				// ft_putstr_fd("(null)", 1);
				str++;
			}
			else
			{
				ft_putchar_fd(*str++, 1);
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}

