/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:47:25 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 04:52:03 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_conversion(const char *s, va_list arg)
{
	int	sum;

	sum = 1;
	if (*s == 'c')
		ft_putchar(va_arg(arg, int));
	else if (*s == 's')
		sum = ft_putstr(va_arg(arg, char *));
	else if (*s == 'i' || *s == 'd')
		sum = ft_convertint(va_arg(arg, int));
	else if (*s == 'u')
		sum = ft_convertu(va_arg(arg, unsigned int));
	else if (*s == 'x' || *s == 'X')
		sum = ft_converthex(va_arg(arg, int), (char *)s);
	else if (*s == '%')
		ft_putchar('%');
	else if (*s == 'p')
		sum = ft_convertptr(va_arg(arg, void *));
	return (sum);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	arg;
	int		len;

	va_start(arg, s);
	len = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len = check_conversion(&s[i], arg);
			i++;
			continue ;
		}
		ft_putchar(s[i++]);
		len++;
	}
	return (len);
}
