/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:18:01 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/11 10:43:53 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))

{
	t_list	*temp;
	t_list	*start;

start = *lst;
	while (start)
	{
		temp = start->next;
		del(start->content);
		free(start);
		start = temp;
	}
	*lst = NULL;
}
