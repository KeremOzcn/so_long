/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printadress.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kozcan <kozcan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:34:12 by kozcan            #+#    #+#             */
/*   Updated: 2025/02/25 15:34:14 by kozcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_to_hex_pf(size_t n, int i, char *set)
{
	if (n >= 16)
	{
		i = ft_to_hex_pf(n / 16, i, set);
		i = ft_to_hex_pf(n % 16, i, set);
	}
	else
		i = ft_putchar_print(set[n], i);
	return (i);
}

int	ft_putadress_print(void *p, int i)
{
	size_t	ptr;

	if (p == NULL)
		i = ft_putstr_print("0x0", i);
	else
	{
		ptr = (size_t)p;
		i = ft_putstr_print("0x", i);
		i = ft_to_hex_pf(ptr, i, "0123456789abcdef");
	}
	return (i);
}
