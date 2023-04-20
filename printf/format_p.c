/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:58:51 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:53:50 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_p(va_list arg, int *cnt)
{
	void	*temp;
	size_t	address;
	char	*address_temp;

	temp = va_arg(arg, void *);
	address = (size_t)temp;
	write(1, "0x", 2);
	while (address)
	{

		address = address / 16;
	}
	printf("%p",temp);
}
