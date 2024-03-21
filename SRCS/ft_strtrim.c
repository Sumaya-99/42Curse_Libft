/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:22:13 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/05 12:38:52 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	trimlen;
	int		a;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	a = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimlen = end - start;
	str = (char *)malloc(trimlen + 1);
	if (!str)
		return (NULL);
	while (start < end)
		str[a++] = s1[start++];
	str[a] = '\0';
	return (str);
}
