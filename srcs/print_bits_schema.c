/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits_schema.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:47:31 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 16:51:54 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/print_bits.h"

static size_t	count_chars(size_t nb)
{
	size_t	i;

	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static void	print_bits_width(size_t octet, unsigned int bits)
{
	size_t	i;
	size_t	act;

	i = 0;
	act = power(2, (bits - 1));
	while (octet && act)
	{
		if (octet / act)
		{
			printf(YEL"%ld", act);
			if (act != 1)
				printf(" ");
			octet -= act;
		}
		else
			printf(RST_CLR"%ld ", act);
		act /= 2;
		i++;
		if (!(i % 8) && octet)
			printf("| ");
	}
	printf("\n");
}

static void	print_bits_act(size_t octet, unsigned int bits)
{
	size_t	i;
	size_t	act;
	size_t	tmp;

	i = 0;
	act = power(2, (bits - 1));
	while (octet && act)
	{
		tmp = count_chars(act);
		while (tmp > 1)
		{
			printf(" ");
			tmp--;
		}
		if (octet / act)
		{
			printf(YEL"1");
			if (act != 1)
				printf(" ");
			octet -= act;
		}
		else
			printf(RST_CLR"0 ");
		act /= 2;
		i++;
		if (!(i % 8) && octet)
			printf("| ");
	}
	printf("\n");
}

void	print_bits_schema(size_t octet, unsigned int bits)
{
	if (check_inputs(octet, bits))
	{
		print_bits_act(octet, bits);
		print_bits_width(octet, bits);
	}
}
