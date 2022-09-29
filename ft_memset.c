/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:21:17 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 16:39:43 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;

i = 0;
ss = (char *)s;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return ((void *)ss);
}

// int main ()
// {
// char s[10];

// 	printf("%s", ft_memset(s, 'a', 5));
// }