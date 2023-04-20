/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:33:33 by seoson            #+#    #+#             */
/*   Updated: 2023/04/20 14:09:33 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_s(va_list arg, int *cnt)
{
	char	*s;
	int		index;

	s = va_arg(arg, char *);
	index = 0;
	while (s[index])
		index++;
	write(1, s, index);
	*cnt = *cnt + index;
}
