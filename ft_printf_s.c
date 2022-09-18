/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:00:22 by segan             #+#    #+#             */
/*   Updated: 2022/09/18 15:38:41 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(const char *str, int *sum)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		(*sum) += 6;
		return ;
	}
	while (*str)
	{
		ft_putchar_fd((char) *str, 1);
		str++;
		(*sum)++;
	}
}
