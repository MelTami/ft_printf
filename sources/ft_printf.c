/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:47:25 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 01:21:46 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/coder/ft_printf/includes/ft_libftprintf.h"

int	check_conversion(const char *s, va_list arg)
{
	int	sum;

	sum = 0;
	if (*s == 'c')
	{
		ft_putchar(va_arg(arg, char));
		sum = 1;
	}
	else if (*s == 's')
	{
		ft_putstr(va_arg(arg, char *));
		sum = ft_strlen(va_arg(arg, char *));
	}
	else if (*s == 'i' || *s == 'd' || *s == 'u')
		sum = ft_convertint(va_arg(arg, int));
	else if (*s == 'x' || *s == 'X')
		sum = ft_converthex(va_arg(arg, int), s);
	else if (*s == '%')
	{
		ft_putchar('%');
		sum = 1;
	}
	else if (*s == 'p')
		sum = ft_convertptr(va_arg(arg, int), s);
	return (sum);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	arg;
	char	c;
	int		len;

	va_start(arg, s);
	len = 0;
	i = 0;
	c = va_arg(arg, char);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len = check_conversion(&s[i], arg);
			break ;
		}
		ft_putchar(s[i++]);
		len++;
	}
	return (len);
}
