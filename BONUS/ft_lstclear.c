/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:04:40 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/03 15:02:57 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		list = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = list;
	}
	*lst = NULL;
}
