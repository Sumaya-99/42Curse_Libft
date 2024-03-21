/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:10:21 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 12:11:34 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	size_t	a;
	char	*str;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	str = malloc(sizeof(char) * (slen + 1));
	if (!str)
		return (NULL);
	a = 0;
	while (a < slen)
	{
		str[a] = f(a, s[a]);
		a++;
	}
	str[a] = '\0';
	return (str);
}
