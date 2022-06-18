/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 19:14:12 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/06/17 19:16:14 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
