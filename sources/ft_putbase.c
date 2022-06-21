/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:35:28 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 01:11:23 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/coder/ft_printf/includes/ft_libftprintf.h"

int	ft_putbase(unsigned long num, char *base)
{
	int			len_base;
	static int	sum;

	sum = 0;
	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putbase(num / len_base, base);
	sum++;
	ft_putchar(base[num % len_base]);
	return (sum);
}
