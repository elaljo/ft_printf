/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:41:16 by moelalj           #+#    #+#             */
/*   Updated: 2022/11/04 16:07:47 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	formats(va_list p_args, char c);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int nb);
int	ft_putnbr_un(unsigned int nb);
int	ft_hexa_lower(unsigned int nb);
int	ft_hexa_upper(unsigned int nb);
int	ft_ptr(unsigned long nb);
int	ft_strlen(const char *str);

#endif
