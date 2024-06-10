/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:21:10 by leaugust          #+#    #+#             */
/*   Updated: 2024/06/10 18:06:43 by leaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <assert.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_ifchr(char c);
void	ft_ifint(int value, int *output);
int		ft_ifstr(char *value, int *output);
void	ft_ifptr(unsigned long long value, int *output);
void	ft_ifudi(unsigned int value, int *output);
void	ft_ifhex(unsigned int value, const char c, int *output);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif