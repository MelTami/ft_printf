/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:35:28 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/25 01:10:17 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int num, char *base)
{
	int			len_base;
	static int	len;

	len = 0;
	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_puthex(num / len_base, base);
	len++;
	ft_putchar(base[num % len_base]);
	return (len);
}
