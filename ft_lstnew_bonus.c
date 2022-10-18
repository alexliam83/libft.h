/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:17:04 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/08 13:59:44 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)

{
	t_list	*new;

new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
new->content = content;
new->next = NULL;
	return (new);
}
