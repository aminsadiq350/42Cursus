/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:27:02 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/18 18:23:16 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	
	ft_strlcpy(char *restrict dest, const char *restrict src, size_t dstsize)
{
	size_t	res;

	res = ft_strlen(src);
	if (dstsize < 1)
		return (res);
	while (*src && dstsize - 1 > 0)
	{
		*dest++ = *src++;
		dstsize--;
	}
	*dest = '\0';
	return (res);
}
