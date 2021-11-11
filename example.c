/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:53:18 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 17:38:31 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/print_bits.h"

/*
*	USAGE:
*	1st param: bytes to be print
*	2nd param: number of bits to be print
*
*	Bits should always be ^8 and >= 8
*	Doesn't work when bits > 64
*/

int	main(void)
{
	// only prints the bits
	print_bits(42, 16);

	// print the whole schema for better understanding
	print_bits_schema(42, 16);
	return (0);
}
