/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifudi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 00:51:33 by leaugust          #+#    #+#             */
/*   Updated: 2024/06/10 18:06:33 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ifudi(unsigned int n, int *output)
{
	if (n >= 10)
		ft_ifudi(n / 10, output);
	ft_putchar_fd(n % 10 + '0', 1);
	(*output)++;
}
