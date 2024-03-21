/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:13 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 14:59:20 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	a;

	if (dstsize == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	a = 0;
	if (dstlen >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[a] && (dstlen + a) < (dstsize - 1))
	{
		dst[dstlen + a] = src[a];
		a++;
	}
	dst[dstlen + a] = '\0';
	return (ft_strlen(src) + dstlen);
}
