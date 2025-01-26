/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzohraby <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:41:18 by vzohraby          #+#    #+#             */
/*   Updated: 2025/01/26 13:28:17 by vzohraby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_argument(va_list arg, char c)
{
	if (c == 'c')
		return character(va_arg(arg, int));
	return (0);
}

int ft_printf(const char * format, ...)
{
	int i;
	int bytes;
	va_list arg;

	va_start(arg, format);
	bytes = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0' && format[i + 1] == '%')
		{
			return (1);
			++i;
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			bytes += check_argument(arg, format[i + 1]);
			++i;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			bytes += 1;
		}		
		++i;		
	}
	return (bytes);
}

// int main()
// {
// 	ft_printf("%c", '0');
// 	ft_printf(" %c ", '0');
// 	ft_printf(" %c", '0' - 256);
// 	ft_printf("%c ", '0' + 256);
// 	ft_printf(" %c %c %c ", '0', 0, '1');
// 	ft_printf(" %c %c %c ", ' ', ' ', ' ');
// 	ft_printf(" %c %c %c ", '1', '2', '3');
// 	ft_printf(" %c %c %c ", '2', '1', 0);
// 	ft_printf(" %c %c %c ", 0, '1', '2');
// }