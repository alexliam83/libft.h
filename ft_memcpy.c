/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:49:32 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 17:15:45 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)

{
	size_t	i;
	char	*s;
	char	*ss;

	i = 0;
	s = (char *)dest;
	ss = (char *)src;
	if (((char)dest) == '\0' && ((char)src) == '\0')
		return (dest);
	while (i < n)
	{
			s[i] = ss[i];
			i++;
	}
	dest = (void *restrict)s;
	return (dest);
}
