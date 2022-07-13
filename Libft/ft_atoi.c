/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:30:41 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/13 18:45:03 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	space_check(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int		index;
	int		neg_multi;
	long	result;

	index = 0;
	result = 0;
	neg_multi = 1;
	while (space_check(str[index]))
		index++;
	if ((str[index] == '-' || str[index] == '+'))
	{
		if (str[index] == '-')
			neg_multi = -1 * neg_multi;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		if (result > 2147483647 && neg_multi == 1)
			return (-1);
		else if (result > 2147483648 && neg_multi == -1)
			return (0);
		index++;
	}
	return (neg_multi * result);
}
