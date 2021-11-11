/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:46:22 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 16:46:58 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/print_bits.h"

int	check_inputs(__int64_t octet, unsigned int bits)
{
	if (octet < 0 || bits % 8 || bits <= 0)
	{
		printf(RED"ERROR: ");
		if (octet < 0)
			printf(RST_CLR"Does not work with negative numbers.\n");
		else if (bits % 8 || bits <= 0)
			printf(RST_CLR"Bits should be ^8 and >= 8.\n");
		return (0);
	}
	return (1);
}
