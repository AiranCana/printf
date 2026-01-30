/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putthing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:18:49 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/30 16:13:57 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putnbr(long i)
{
	ft_putnbr_fd(i, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
