/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:24:57 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:49:43 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_print_str(char *arg)
{
	int		count;

	count = 0;
	if (arg == NULL)
	{
		ft_putstr_fd("(null)", 1);
		count += ft_strlen("(null)");
	}
	else
	{
		ft_putstr_fd(arg, 1);
		count += ft_strlen(arg);
	}
	return (count);
}
