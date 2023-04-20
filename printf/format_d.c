/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:56:11 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:09:28 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *cnt)
{
	long long	temp;
	char		print;

	temp = (long long)n;
	if (temp < 0)
	{
		temp *= -1;
		*cnt = *cnt + 1;
		write(fd, "-", 1);
	}
	if (temp > 9)
		ft_putnbr_fd(temp / 10, fd, cnt);
	print = (temp % 10) + '0';
	*cnt = *cnt + 1;
	write(fd, &print, 1);
}

void	format_d(va_list arg, int *cnt)
{
	int	temp;

	temp = va_arg(arg, int);
	ft_putnbr_fd(temp, 1, cnt);
}
