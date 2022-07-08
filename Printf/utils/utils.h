/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminsadiq <aminsadiq@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:03:47 by aminsadiq         #+#    #+#             */
/*   Updated: 2022/07/09 01:52:52 by aminsadiq        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../libft/libft.h"

int	ft_print_char(int arg);
int	ft_print_nbr_base(int nbr, unsigned int base_num, char *representation);
int	ft_print_nbr(int n);
int	ft_print_ptr_hex(uintptr_t nbr);
int	ft_print_str(char *arg);

#endif // UTILS_H
