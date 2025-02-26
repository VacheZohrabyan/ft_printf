/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:29:10 by vzohraby          #+#    #+#             */
/*   Updated: 2025/02/12 11:10:24 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char str)
{
	return (write(1, &str, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (write(1, "(null)", 6));
	count = 0;
	while (*str)
	{
		++count;
		ft_putchar(*str);
		++str;
	}
	return (count);
}
