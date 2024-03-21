/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 13:48:24 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 14:57:52 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd ("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		ft_putnbr_fd (-n, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd (n + '0', fd);
	else
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
}
