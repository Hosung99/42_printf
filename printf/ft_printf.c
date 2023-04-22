/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:50:00 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 15:02:44 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_format(va_list arg, const char c, int *cnt)
{
	if (c == 'd' || c == 'i')
		return (format_d(arg, cnt));
	else if (c == 'c')
		return (format_c(arg, cnt));
	else if (c == 's')
		return (format_s(arg, cnt));
	else if (c == '%')
		return (format_percent(cnt));
	else if (c == 'u')
		return (format_u(arg, cnt));
	else if (c == 'p')
		return (format_p(arg, cnt));
	else if (c == 'x')
		return (format_x(arg, cnt));
	else if (c == 'X')
		return (format_x_large(arg, cnt));
	else
		return (-1);
}

int	ft_printf(const char *s, ...)
{
	int		cnt;
	va_list	list;

	cnt = 0;
	va_start(list, s);
	while (*s)
	{
		if (*s == '%')
		{
			if (printf_format(list, *(s + 1), &cnt) == -1)
				return (-1);
			s += 2;
		}
		else
		{
			if (write(1, s++, 1) == -1)
				return (-1);
			cnt++;
		}
	}
	va_end(list);
	return (cnt);
}
