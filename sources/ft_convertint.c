/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:04:59 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 01:21:28 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/coder/ft_printf/includes/ft_libftprintf.h"

int	ft_convertint(int nb)
{
	char	*s_nb;

	s_nb = ft_itoa(nb);
	ft_putstr(s_nb);
	return (ft_strlen(s_nb));
}
