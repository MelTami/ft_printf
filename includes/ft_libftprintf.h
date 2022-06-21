/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libftprintf.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:00:28 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/22 01:41:22 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFTPRINTF_H
# define FT_LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_convertint(int nb);
int		ft_converthex(int hex, char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_itoa(int n);
void	ft_putchar(char c);
int		ft_putbase(unsigned long num, char *base);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);

#endif