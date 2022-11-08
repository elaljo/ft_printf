/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:54:29 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/07 13:03:05 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long nb)
{
	int		count;
	char	*str;

	count = 0;
	str = "0123456789abcdef";
	if (nb >= 0 && nb <= 15)
		count += ft_putchar(str[nb]);
	else
	{
		count += ft_ptr(nb / 16);
		count += ft_ptr(nb % 16);
	}
	return (count);
}
