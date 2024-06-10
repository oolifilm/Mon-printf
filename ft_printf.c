/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:19:26 by leaugust          #+#    #+#             */
/*   Updated: 2024/06/10 20:09:44 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type(char c, va_list value, int *output)
{
	if (c == 'c')
	{
		(*output)++;
		ft_ifchr(va_arg(value, int));
	}
	else if (c == 's')
		ft_ifstr(va_arg(value, char *), output);
	else if (c == 'p')
		ft_ifptr(va_arg(value, unsigned long long), output);
	else if (c == 'd' || c == 'i')
		ft_ifint(va_arg(value, int), output);
	else if (c == 'u')
		ft_ifudi(va_arg(value, unsigned int), output);
	else if (c == 'x' || c == 'X')
		ft_ifhex(va_arg(value, unsigned int), c, output);
	else if (c == '%')
	{
		ft_putchar_fd(c, 1);
		(*output)++;
	}
}

int	ft_printf(const char *format, ...)
{
	int		output;
	va_list	args;

	output = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			ft_ifchr(format[0]);
			output++;
		}
		else
			ft_type(*++format, args, &output);
		format++;
	}
	va_end(args);
	return (output);
}
/*
int	main(void)
{
	ft_printf("%.0p, %.p", 0, 0);
	printf("%.0p, %.p", 0, 0);
	return (0);
}*/
