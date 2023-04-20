/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:50:00 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:53:53 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printf_format(va_list arg, const char c, int *cnt)
{
	if (c == 'd')
		format_d(arg, cnt);
	else if (c == 'i')
		format_d(arg, cnt);
	else if (c == 'c')
		format_c(arg, cnt);
	else if (c == 's')
		format_s(arg, cnt);
	else if (c == '%')
		format_percent(cnt);
	else if (c == 'u')
		format_u(arg, cnt);
	else if (c == 'p')
		format_p(arg, cnt);
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
					printf_format(list, *(s + 1), &cnt);
					s += 2;
				}
				else
				{
					write(1, s++, 1);
					cnt++;
				}
		}
		va_end(list);
		return (cnt);
}
#include <stdio.h>
int main()
{
	int a = 123;
	printf("%d",ft_printf("%p",a));
}
