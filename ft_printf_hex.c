/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:33:35 by segan             #+#    #+#             */
/*   Updated: 2022/09/14 13:57:27 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_lowerx(unsigned int n, int *sum)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789abcdef"[n % 16], 1);
		(*sum)++;
	}
	else if (n >= 16)
	{
		ft_printf_lowerx(n / 16, sum);
		ft_putchar_fd("0123456789abcdef"[n % 16], 1);
		(*sum)++;
	}
}

void	ft_printf_upperx(unsigned int n, int *sum)
{
	if (n < 16)
	{
		ft_putchar_fd("0123456789ABCDEF"[n % 16], 1);
		(*sum)++;
	}
	else if (n >= 16)
	{
		ft_printf_upperx(n / 16, sum);
		ft_putchar_fd("0123456789ABCDEF"[n % 16], 1);
		(*sum)++;
	}
}
