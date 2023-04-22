/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:58:51 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 15:02:39 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_reverse(size_t address, int *cnt)
{
	if (address < 16)
	{
		*cnt = *cnt + 1;
		if (write(1, &"0123456789abcdef"[address % 16], 1) == -1)
			return (-1);
	}
	else
	{
		*cnt = *cnt + 1;
		if (print_reverse(address / 16, cnt) == -1)
			return (-1);
		if (write(1, &"0123456789abcdef"[address % 16], 1) == -1)
			return (-1);
	}
	return (1);
}

int	format_p(va_list arg, int *cnt)
{
	void	*temp;
	size_t	address;

	temp = va_arg(arg, void *);
	address = (size_t)temp;
	if (write(1, "0x", 2) == -1)
		return (-1);
	*cnt = *cnt + 2;
	return (print_reverse(address, cnt));
}
