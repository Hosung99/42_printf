/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:34:52 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:00:09 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_uputnbr_fd(int n, int fd, int *cnt)
{
	long long	temp;
	char		print;

	temp = (long long)n;
	if (temp < 0)
		temp *= -1;
	if (temp > 9)
		ft_uputnbr_fd(temp / 10, fd, cnt);
	print = (temp % 10) + '0';
	*cnt = *cnt + 1;
	write(fd, &print, 1);
}

void	format_u(va_list arg, int *cnt)
{
	int	temp;
	
	temp = va_arg(arg, int);
	ft_uputnbr_fd(temp, 1, cnt);
}
