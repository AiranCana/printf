/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanadil <acanadil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:41:50 by acanadil          #+#    #+#             */
/*   Updated: 2026/01/30 16:08:22 by acanadil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int		ft_printf( const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(long i);
int		ft_putstr(char *s);	

#endif