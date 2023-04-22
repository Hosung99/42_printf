/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:52:49 by seoson            #+#    #+#             */
/*   Updated: 2023/04/22 15:01:43 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_x(va_list arg, int *cnt)
{
	int				temp;
	unsigned int	casting;

	temp = va_arg(arg, int);
	casting = temp;
	return (print_reverse((size_t)casting, cnt));
}
