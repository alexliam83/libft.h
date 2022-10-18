/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:34:36 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/30 11:55:43 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)

{
	size_t	i;

i = 0;
	if ((char)src == '\0' && (char)dest == '\0')
		return (dest);
	if ((size_t)dest - (size_t)src < n)
	{
		i = n - 1;
		while (i < n)
		{
		((char *)dest)[i] = ((char *)src)[i];
		i--;
		}
	}
	else
	{
		while (i < n)
		{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
		}
	}
	return (dest);
}
