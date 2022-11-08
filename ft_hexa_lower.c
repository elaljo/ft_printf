/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:21:16 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/06 18:17:43 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lower(unsigned int nb)
{
	char					*str;
	int						count;

	count = 0;
	str = "0123456789abcdef";
	if (nb >= 0 && nb <= 15)
		count += ft_putchar(str[nb]);
	else
	{
		count += ft_hexa_lower(nb / 16);
		count += ft_hexa_lower(nb % 16);
	}
	return (count);
}
