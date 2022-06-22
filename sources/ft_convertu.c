/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 04:26:47 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 04:52:03 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_convertu(unsigned int nb)
{
	static int	sum;

	sum = 0;
	if (nb / 10 > 0)
		ft_convertu(nb / 10);
	sum++;
	ft_putchar((nb % 10) + '0');
	return (sum);
}
