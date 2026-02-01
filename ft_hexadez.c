/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadez.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:06:07 by acanadil          #+#    #+#             */
/*   Updated: 2026/02/01 18:17:01 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numlen(long n)
{
	int	d;

	if (n < 0)
	{
		d = 2;
		n = -n;
	}
	else
		d = 1;
	while (n > 15)
	{
		n /= 16;
		++d;
	}
	++d;
	return (d);
}

static void	numins(long temp, char *dst, int len)
{
	char	c;

	if (temp >= 16)
		numins((temp / 16), dst - 1, len - 1);
	temp %= 16;
	if (temp >= 10)
		c = temp + 55;
	else
		c = 48 + temp;
	dst[0] = c;
}

char	*ft_itoah(unsigned int n)
{
	char	*dst;
	long	num;
	int		len;

	num = n;
	len = numlen(num);
	dst = malloc(sizeof (char) * len);
	if (!dst)
		return (NULL);
	dst[len - 1] = '\0';
	if (num < 0)
	{
		dst[0] = '-';
		num = -num;
	}
	numins(num, &dst[len - 2], len - 2);
	return (dst);
}
