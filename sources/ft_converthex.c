/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:02:51 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/25 01:10:29 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_converthex(int hex, char *s)
{
	int	len;

	if (*s == 'X')
		len = ft_puthex(hex, "0123456789ABCDEF");
	else
		len = ft_puthex(hex, "0123456789abcdef");
	return (len);
}
