/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 03:18:57 by smunio            #+#    #+#             */
/*   Updated: 2022/12/01 01:58:50 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h> 
# include <limits.h>

int		ft_putchar(char c);
int		ft_putnbr_hex(long long nb, char *hex);
int		ft_putadr_hex(unsigned long nb, int taille);
int		ft_putstr(char *s);
int		ft_putnbr(long long nb, int taille);
size_t	ft_strlen(const char *str);
int		ft_printf(const char	*s, ...);
int		ft_putchar2(char c);
int		size_number(long long nb, int u);
int		size_number_base10(long long nb, int u, int taille);
int		size_ptr(unsigned long nb, int u);

#endif