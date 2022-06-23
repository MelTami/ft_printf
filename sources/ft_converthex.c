/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:02:51 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 22:47:49 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_converthex(int hex, char *s)
{
	int	len;

	if (*s == 'X')
		len = ft_putbase(hex, "0123456789ABCDEF", 0);
	else
		len = ft_putbase(hex, "0123456789abcdef", 0);
	return (len);
}
