/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:03:50 by segan             #+#    #+#             */
/*   Updated: 2022/09/18 15:38:11 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hex_unsignedlong(unsigned long n, int *sum)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789abcdef"[n % 16], 1);
		(*sum)++;
	}
	else if (n >= 16)
	{
		ft_printf_hex_unsignedlong(n / 16, sum);
		ft_putchar_fd("0123456789abcdef"[n % 16], 1);
		(*sum)++;
	}
}

void	ft_printf_p(unsigned long n, int *sum)
{
	ft_putstr_fd("0x", 1);
	(*sum) += 2;
	ft_printf_hex_unsignedlong(n, sum);
}
