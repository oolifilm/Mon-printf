/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:18:07 by leaugust          #+#    #+#             */
/*   Updated: 2024/06/10 18:06:29 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ifstr(char *value, int *output)
{
	int	i;

	i = 0;
	if (!value)
		value = "(null)";
	while (value[i] != '\0')
	{
		ft_ifchr(value[i]);
		(*output)++;
		i++;
	}
	return (1);
}
