/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:09:24 by segan             #+#    #+#             */
/*   Updated: 2022/09/22 18:25:26 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	unsignedintlen(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				len;
	int				sign;
	unsigned int	num;

	sign = 0;
	len = unsignedintlen(n);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	num = n;
	str[len--] = 0;
	while (len >= sign)
	{
		str[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

void	ft_printf_u(unsigned int n, int *sum)
{
	char	*num;

	num = ft_uitoa(n);
	if (num == NULL)
		return ;
	ft_putstr_fd(num, 1);
	*sum += ft_strlen(num);
	free(num);
	num = NULL;
}
