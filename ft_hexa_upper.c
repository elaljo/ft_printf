/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:58:12 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/06 20:04:43 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_upper(unsigned int nb)
{
	int		count;
	char	*str;

	str = "0123456789ABCDEF";
	count = 0;
	if (nb >= 0 && nb <= 15)
		count += ft_putchar(str[nb]);
	else
	{
		count += ft_hexa_upper(nb / 16);
		count += ft_hexa_upper(nb % 16);
	}
	return (count);
}
