/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:02:51 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 01:13:43 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/coder/ft_printf/includes/ft_libftprintf.h"

int	ft_converthex(int hex, char *s)
{
	int	len;

	if (*s == 'X')
	{
		ft_putstr("0X");
		len = ft_putbase(hex, "0123456789ABCDEF");
	}
	else
	{
		ft_putstr("0x");
		len = ft_putbase(hex, "0123456789abcdef");
	}
	return (len);
}
