/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:00:22 by segan             #+#    #+#             */
/*   Updated: 2022/09/16 18:05:46 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "limits.h"

void	ft_printf_s(const char *str, int *sum)
{
	if (ft_strlen(str) == INT_MAX)
	{
		(*sum) = -1;
		return ;
	}
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
