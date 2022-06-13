/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:19:27 by ashaikhn          #+#    #+#             */
/*   Updated: 2022/05/22 00:19:30 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int		flag;

	flag = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		flag = 1;
	return (flag);
}
