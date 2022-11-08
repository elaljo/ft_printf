/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:05:38 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/07 15:50:04 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formats(va_list p_args, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(p_args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(p_args, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(p_args, int));
	else if (c == 'u')
		count += ft_putnbr_un(va_arg(p_args, unsigned int));
	else if (c == 'x')
		count += ft_hexa_lower(va_arg(p_args, unsigned long));
	else if (c == 'X')
		count += ft_hexa_upper(va_arg(p_args, unsigned long));
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_ptr(va_arg(p_args, unsigned long));
	}
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}
