/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:44:19 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:38:12 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	printf_format(va_list arg, const char c, int *cnt);
void	format_s(va_list arg, int *cnt);
void	format_d(va_list arg, int *cnt);
void	format_c(va_list arg, int *cnt);
void	format_u(va_list arg, int *cnt);
void	format_percent(int *cnt);
void	format_p(va_list arg, int *cnt);
