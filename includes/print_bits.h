/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:41:10 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 16:54:06 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_BITS_H
# define PRINT_BITS_H

# include <unistd.h>
# include <stdio.h>
# include "ansi_colors.h"

// Utils
int		ft_putchar_fd(int c, int fd);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putstr_color_fd(const char *color, const char *str, int fd);
size_t	power(int base, int exp);

int		check_inputs(__int64_t octet, unsigned int bits);
void	print_bits(size_t octet, unsigned int bits);
void	print_bits_schema(size_t octet, unsigned int bits);

#endif
