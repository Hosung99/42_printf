/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x_large.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:25:59 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 15:01:17 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_reverse_large(size_t address, int *cnt)
{
	if (address < 16)
	{
		*cnt = *cnt + 1;
		if (write(1, &"0123456789ABCDEF"[address % 16], 1) == -1)
			return (-1);
	}
	else
	{
		*cnt = *cnt + 1;
		if (print_reverse_large(address / 16, cnt) == -1)
			return (-1);
		if (write(1, &"0123456789ABCDEF"[address % 16], 1) == -1)
			return (-1);
	}
	return (1);
}

int	format_x_large(va_list arg, int *cnt)
{
	int				temp;
	unsigned int	casting;

	temp = va_arg(arg, int);
	casting = temp;
	return (print_reverse_large((size_t)casting, cnt));
}
