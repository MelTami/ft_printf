/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 02:29:20 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/25 00:53:37 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_convertptr(void *ptr)
{
	int	i;

	if(!ptr)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	i = 2;
	i += ft_putbase((unsigned long)ptr, "0123456789abcdef");
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	int i;
// 	int b;

// 	i = ft_convertptr(-1);
// 	b = printf("\n%p\n", -1);

// 	printf("meu: %d\nprintf: %d\n", i, b);
// }
