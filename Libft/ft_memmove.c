/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:41:11 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/26 03:41:51 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;

	dest = dst;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (len--)
			*dest++ = *(unsigned char *)src++;
	}
	else
	{
		src = src + len - 1;
		dest = dest + len - 1;
		while (len--)
			*dest-- = *(unsigned char *)src--;
	}
	return (dst);
}
