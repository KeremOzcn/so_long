/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:34:25 by kozcan            #+#    #+#             */
/*   Updated: 2025/02/25 15:34:27 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_print(char c, int i);
int	ft_putstr_print(char *s, int i);
int	ft_putnbr_print(long n, int i);
int	ft_putnbr_unsigned(unsigned int n, int i);
int	ft_putadress_print(void *p, int i);
int	ft_puthex_print(unsigned int x, int i, char format);

#endif