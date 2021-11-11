/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:47:36 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 17:58:55 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/print_bits.h"

void	print_bits(ssize_t octet, unsigned int bits)
{
	size_t	i;
	size_t	act;

	if (!check_inputs(octet, bits))
		return ;
	i = 0;
	act = power(2, (bits - 1));
	while (octet >= 0 && act)
	{
		if (octet / act)
		{
			ft_putstr_color_fd(YEL, "1", STDOUT_FILENO);
			octet -= act;
		}
		else
			ft_putstr_fd("0", STDOUT_FILENO);
		act /= 2;
		i++;
		if (!(i % 8))
			ft_putchar_fd(' ', STDOUT_FILENO);
	}
	ft_putchar_fd('\n', STDOUT_FILENO);
}
