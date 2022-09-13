/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:33:35 by segan             #+#    #+#             */
/*   Updated: 2022/09/13 14:59:37 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(int n, int *sum)
{
	while (n)
	{
		ft_putchar_fd("0123456789abcdef"[n % 16], 1);
		n /= 16;
		(*sum)++;
	}
}

void	ft_printf_X(int n, int *sum)
{
	while (n)
	{
		ft_putchar_fd("0123456789ABCDEF"[n % 16], 1);
		n /= 16;
		(*sum)++;
	}
}