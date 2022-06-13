/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaikhn <ashaikhn@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 00:22:22 by ashaikhn          #+#    #+#             */
/*   Updated: 2022/05/22 00:22:26 by ashaikhn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	flag;

	flag = 0;
	if ((c >= '0' && c <= '9'))
		flag = 1;
	return (flag);
}
