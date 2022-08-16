/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:47:42 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/08/14 20:34:26 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;

	if (len == 0)
		return ;
	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = '\0';
}

// void	*ft_realloc(void *ptr, size_t len)
// {
// 	void	*real;

// 	real = malloc(len);
// 	ft_bzero(real, len);
// 	if (real)
// 	{
// 		ft_memcpy(real, ptr, len);
// 		free(ptr);
// 	}
// 	return (real);
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == SIZE_MAX && count > 1)
		return (NULL);
	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	str = str - len + 1;
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	if (!str)
		return (0);
	while (*str++)
	{
		count++;
	}
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if (!s)
		return (0);
	
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = (ft_strlen(s) - start);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}

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

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*cpy;

	size = 0;
	while (s1[size] != '\0')
		size++;
	cpy = (char *)malloc(size + 1);
	if (cpy == NULL)
		return (0);
	else
	{
		size = 0;
		while (s1[size] != 0)
		{
			cpy[size] = s1[size];
			size++;
		}
		cpy[size] = '\0';
		return (cpy);
	}
}
