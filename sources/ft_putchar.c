/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:03:30 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/02 22:57:10 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/coder/ft_printf/includes/ft_libftprintf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
