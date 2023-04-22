/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:44:19 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 14:43:41 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# define FT_PRINTF_H

int	ft_printf(const char *s, ...);
int	printf_format(va_list arg, const char c, int *cnt);
int	format_s(va_list arg, int *cnt);
int	format_d(va_list arg, int *cnt);
int	format_c(va_list arg, int *cnt);
int	format_u(va_list arg, int *cnt);
int	format_percent(int *cnt);
int	format_p(va_list arg, int *cnt);
int	format_x(va_list arg, int *cnt);
int	format_x_large(va_list arg, int *cnt);
int	print_reverse(size_t address, int *cnt);
#endif
