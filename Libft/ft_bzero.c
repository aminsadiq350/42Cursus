/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:37:46 by ashaikhn          #+#    #+#             */
/*   Updated: 2022/05/22 01:37:48 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;

	if (len == 0)
		return ;
	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = '\0';
}
