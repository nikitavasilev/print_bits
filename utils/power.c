/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvasilev <nvasilev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:47:26 by nvasilev          #+#    #+#             */
/*   Updated: 2021/11/11 16:49:58 by nvasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/print_bits.h"

size_t	power(int base, int exp)
{
	size_t	res;

	res = 1;
	while (exp)
	{
		res *= base;
		exp--;
	}
	return (res);
}
