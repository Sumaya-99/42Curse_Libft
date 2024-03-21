/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:13 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 14:58:27 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*b;
	int		a;
	int		c;

	c = ft_strlen(s1);
	a = 0;
	b = ((char *)malloc((c + 1) * (sizeof(char))));
	if (!b)
		return (0);
	while (s1[a] != '\0')
	{
		b[a] = s1[a];
		a++;
	}
	b[a] = '\0';
	return (b);
}
