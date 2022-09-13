/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:00:39 by segan             #+#    #+#             */
/*   Updated: 2022/09/13 15:33:01 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "../libft/libft.h"

int		ft_printf(const char *format, ...);
void	check_format_specifier(const char *format, va_list ap, int *sum);
void	ft_printf_s(const char *str, int *sum);
void	ft_printf_di(int n, int *sum);
void	ft_printf_u(unsigned int n, int *sum);
void	ft_printf_x(int n, int *sum);
void	ft_printf_X(int n, int *sum);

#endif