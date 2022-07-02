/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:33:49 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/24 17:24:44 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*string;
	// char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	string = "test";
	ft_printf("ft_printf: %s %c %i %x %X %% %u %p %%%%%%", string, '0x4f', 2147483647, 2147483647, 2147483647, 2147483647, &string);
	printf("\nprintf:    %s %c %i %x %X %% %u %p %%%%%% \n", string, '0x4f', 2147483647, 2147483647, 2147483647, 2147483647, &string);


	// Checking return values
	printf("\nReturn value tests:\n");
	// int count = printf("%s%s", NULL, NULL);
	// printf("printf - returned: %d\n", count);
	int count = ft_printf("%%p is how you print a pointer in printf");
	printf("ft_printf - returned: %d", count);

	return (0);
}
