/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:00:28 by mvavasso          #+#    #+#             */
/*   Updated: 2022/06/25 01:17:28 by mvavasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_convertint(int nb);
int		ft_converthex(int hex, char *s);
char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_putbase(unsigned long num, char *base);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_convertptr(void *ptr);
int		ft_convertu(unsigned int nb);
void	ft_free(char **str);
int		ft_puthex(unsigned int num, char *base);

#endif