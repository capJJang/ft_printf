/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:09:15 by segan             #+#    #+#             */
/*   Updated: 2022/09/18 16:06:14 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_format_specifier(const char *format, va_list ap, int *sum)
{
	if (*format == 'c')
	{
		ft_putchar_fd(va_arg(ap, int), 1);
		(*sum)++;
	}
	else if (*format == 's')
		ft_printf_s(va_arg(ap, const char *), sum);
	else if (*format == 'p')
		ft_printf_p(va_arg(ap, long), sum);
	else if (*format == 'd' || *format == 'i')
		ft_printf_di(va_arg(ap, int), sum);
	else if (*format == 'u')
		ft_printf_u(va_arg(ap, int), sum);
	else if (*format == 'x')
		ft_printf_lowerx(va_arg(ap, int), sum);
	else if (*format == 'X')
		ft_printf_upperx(va_arg(ap, int), sum);
	else if (*format == '%')
	{
		ft_putchar_fd('%', 1);
		(*sum)++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		state;
	int		sum;
	va_list	ap;

	state = 0;
	sum = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%' && state == 0)
			state = 1;
		else if (state == 1)
		{
			check_format_specifier(format, ap, &sum);
			state = 0;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			sum++;
		}
		format++;
	}
	va_end(ap);
	return (sum);
}

int main(void)
{
	ft_printf("%x", 33);
}
