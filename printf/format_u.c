/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:34:52 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 14:58:56 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unbr(int n, int fd, int *cnt)
{
	unsigned int	temp;
	char			print;

	temp = (long long)n;
	if (temp > 9)
		if (print_unbr(temp / 10, fd, cnt) == -1)
			return (-1);
	print = (temp % 10) + '0';
	*cnt = *cnt + 1;
	if (write(fd, &print, 1) == -1)
		return (-1);
	return (1);
}

int	format_u(va_list arg, int *cnt)
{
	int	temp;

	temp = va_arg(arg, int);
	return (print_unbr(temp, 1, cnt));
}
