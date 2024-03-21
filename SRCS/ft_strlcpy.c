/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 09:37:42 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 15:18:24 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	b;

	if (!dstsize)
		return (ft_strlen(src));
	b = 0;
	while (b < (dstsize - 1) && src[b] != '\0')
	{
		dst[b] = src[b];
		b++;
	}
	dst[b] = '\0';
	return (ft_strlen(src));
}
