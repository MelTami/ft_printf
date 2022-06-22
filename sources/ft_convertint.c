/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 22:04:59 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 04:51:44 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_convertint(int nb)
{
	char	*s_nb;
	int		len;

	s_nb = ft_itoa(nb);
	len = ft_strlen(s_nb);
	ft_putstr(s_nb);
	free(s_nb);
	return (len);
}
