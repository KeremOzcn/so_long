/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_keyfunction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:34:08 by kozcan            #+#    #+#             */
/*   Updated: 2025/02/25 15:34:11 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_print(char c, int i)
{
	write(1, &c, 1);
	++i;
	return (i);
}

int	ft_putstr_print(char *s, int i)
{
	int	j;

	j = 0;
	if (!s)
		return (ft_putstr_print("(null)", i));
	while (s[j])
	{
		i = ft_putchar_print(s[j], i);
		j++;
	}
	return (i);
}

int	ft_putnbr_print(long n, int i)
{
	if (n < 0)
	{
		i = ft_putchar_print('-', i);
		n = -n;
	}
	if (n >= 10)
	{
		i = ft_putnbr_print(n / 10, i);
		i = ft_putchar_print(n % 10 + '0', i);
	}
	else
		i = ft_putchar_print(n + '0', i);
	return (i);
}

int	ft_putnbr_unsigned(unsigned int n, int i)
{
	if (n >= 10)
	{
		i = ft_putnbr_unsigned(n / 10, i);
		i = ft_putchar_print(n % 10 + '0', i);
	}
	else
		i = ft_putchar_print(n + '0', i);
	return (i);
}
