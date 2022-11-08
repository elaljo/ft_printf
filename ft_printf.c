/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:40:07 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/07 15:48:24 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	p_args;
	int		i;
	int		count;

	va_start(p_args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += formats(p_args, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(p_args);
	return (count);
}
