/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 08:50:54 by segan             #+#    #+#             */
/*   Updated: 2022/09/21 16:41:25 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_di(int n, int *sum)
{
	char	*num;

	num = ft_itoa(n);
	if (num == NULL)
		return ;
	ft_putstr_fd(num, 1);
	*sum += ft_strlen(num);
	free(num);
	num = NULL;
}
