/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:33:13 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/18 21:30:20 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	search_till;

	if (*needle == '\0')
		return ((char *)haystack);
	search_till = ft_strlen(needle);
	while (*haystack && len-- >= search_till)
	{
		if ((*haystack == *needle)
			&& ft_memcmp(haystack, needle, search_till) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
