/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 20:01:21 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/26 03:20:09 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	str = (char *)s;
	len = ft_strlen(str) - 1;
	str = str + len;
	if (c == 0)
		return (++str);
	while (len-- >= 0)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	return (0);
}
