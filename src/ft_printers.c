/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-elk <mait-elk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:24:47 by mait-elk          #+#    #+#             */
/*   Updated: 2023/11/16 18:20:48 by mait-elk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	_prt_ptr(unsigned long ptr, char *base)
// {
// 	int			i;
// 	int			baselen;
// 	int			max;
// 	char		*buffer;

// 	baselen = _nsx_strlen(base);
// 	max = _nsx_diglen(ptr, baselen);
// 	i = 0;
// 	if (ptr == 0 || ptr == '\0')
// 		return (_prt_str("0x0"));
// 	buffer = malloc(max + 1);
// 	buffer[max--] = '\0';
// 	if (ptr < 0)
// 	{
// 		if (_prt_char('-') == -1)
// 		{
// 			free(buffer);
// 			return (-1);
// 		}
// 		ptr *= -1;
// 	}
// 	while (ptr)
// 	{
// 		buffer[max--] = base[(ptr % baselen)];
// 		ptr /= baselen;
// 		i++;
// 	}
// 	ft_printf("0x%s",buffer + max + 1);
// 	free(buffer);
// 	return (i + 2);
// }

// int	_prt_ptrx(unsigned long ptr, char *base)
// {
// 	int			i;
// 	int			baselen;
// 	int			max;
// 	char		*buffer;

// 	baselen = _nsx_strlen(base);
// 	max = _nsx_diglen(ptr, baselen);
// 	i = 0;
// 	if ((unsigned int)ptr == 0)
// 		return (_prt_str("0"));
// 	buffer = malloc(max + 1);
// 	buffer[max--] = '\0';
// 	while ((unsigned int)ptr)
// 	{
// 		buffer[max--] = base[(ptr % baselen)];
// 		ptr = (unsigned int)ptr / baselen;
// 		i++;
// 	}
// 	ft_printf("%s",buffer + max + 1);
// 	free(buffer);
// 	return (i);
// }

// void	_nsx_prtint(int n)
// {
// 	if (n == -2147483648)
// 	{
// 		_prt_str("-2147483648");
// 		return ;
// 	}
// 	if (n < 0)
// 		n *= -1 * _prt_char('-');
// 	if (n <= 9)
// 	{
// 		_prt_char(n + 48);
// 	}
// 	else if (n)
// 	{
// 		_nsx_prtint(n / 10);
// 		_nsx_prtint(n % 10);
// 	}
// }

// int	_nsx_prtlint(int n)
// {
// 	int	l;

// 	l = 0;
// 	_nsx_prtint(n);
// 	if (n == -2147483648)
// 		return (11);
// 	if (n <= 0)
// 		l++;
// 	while (n)
// 	{
// 		l++;
// 		n /= 10;
// 	}
// 	return (l);
// }

// void	_nsx_prtuint(unsigned int n)
// {
// 	if (n <= 9)
// 	{
// 		_prt_char(n + 48);
// 	}
// 	else if (n)
// 	{
// 		_nsx_prtint(n / 10);
// 		_nsx_prtint(n % 10);
// 	}
// }

// int	_nsx_prtluint(unsigned int n)
// {
// 	int	l;

// 	l = 0;
// 	_nsx_prtuint(n);
// 	if (n == 0)
// 		return (1);
// 	while (n)
// 	{
// 		l++;
// 		n /= 10;
// 	}
// 	return (l);
// }
