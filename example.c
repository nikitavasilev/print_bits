/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:53:18 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 18:03:40 by nvasilev         ###   ########.fr       */
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
	int	nb = 42;

	printf("nb = %d\n", nb);
	printf("\nprint_bits function:\n");
	// only prints the bits
	print_bits(nb, 16);

	printf("\nprint_bits_schema function:\n");
	// print the whole schema for better understanding
	print_bits_schema(nb, 16);

	nb <<= 1;
	printf("\n(nb <<= 1) = %d\n", nb);
	print_bits_schema(nb, 16);
	return (0);
}
