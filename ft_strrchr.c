/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:23:08 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/07 23:22:23 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (*tmp)
		tmp++;
	if ((char)c == '\0')
	{
		return ((char *)tmp);
	}
	while ((--tmp >= (unsigned char *)s))
	{
		if ((unsigned char)c == *tmp)
		{
			return ((char *)tmp);
		}
	}
	return (0);
}
