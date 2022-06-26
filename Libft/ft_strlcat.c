/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:27:51 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/26 02:31:36 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, char *restrict src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	index;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dest_len)
		src_len += dstsize;
	else
		src_len += dest_len;
	while (src[index] != '\0' && (dest_len + index) < (dstsize - 1))
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	if (index > 0)
		dest[dest_len + index] = '\0';
	return (src_len);
}
