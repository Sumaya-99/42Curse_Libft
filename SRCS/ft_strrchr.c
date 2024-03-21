/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:13 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 15:01:27 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	a;

	len = ft_strlen(s) - 1;
	a = 0;
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return (&((char *)s)[len]);
			break ;
		}
		len--;
		a++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[a]);
	return (0);
}
