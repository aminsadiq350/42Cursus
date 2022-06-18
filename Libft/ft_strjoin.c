/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 22:09:53 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/17 22:10:05 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		c1;
	size_t		c2;
	size_t		i;

	c1 = 0;
	c2 = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (c1 != ft_strlen(s1))
	{
		str[i++] = s1[c1++];
	}
	while (c2 != ft_strlen(s2))
	{
		str[i++] = s2[c2++];
	}
	str[i] = '\0';
	return (str);
}
