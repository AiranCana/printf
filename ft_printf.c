/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 10:38:17 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/30 16:02:59 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//pxX
static int	operate(char *ope, va_list arg)
{
	int	i;

	i = 0;
	if (*ope == 'c')
		i += ft_putchar((char) va_arg(arg, int));
	if (*ope == 's')
		i += ft_putstr(va_arg(arg, char *));
	if (*ope == '%')
		i += ft_putchar('%');
	if (*ope == 'd' || *ope == 'i')
		i += ft_putnbr(va_arg(arg, int));
	if (*ope == 'u')
		i += ft_putnbr(va_arg(arg, unsigned int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	char	*s;

	s = (char *) str;
	i = 0;
	va_start(arg, str);
	while (*s)
	{
		if (*s == '%')
			i += operate(++s, arg);
		else
		{
			write(1, s, 1);
			i++;
		}
		s++;
	}
	va_end(arg);
	return (i);
}
