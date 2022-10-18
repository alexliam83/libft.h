/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:37:51 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/10 11:01:41 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lastone;

	lastone = lst;
	if (lastone == NULL)
		return (NULL);
	while (lastone->next != NULL)
		lastone = lastone->next;
	return (lastone);
}
