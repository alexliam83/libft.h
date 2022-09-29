/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:43:43 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 11:52:25 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)

{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{		
			if (little[j + 1] == '\0')
			{
				return ((char *)big + i);
			}
		j++;
		}
	i++;
	}
	return (NULL);
}

// int main ()
// {

//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "o";
//            const char *ptr;

//            ptr = ft_strnstr(largestring, smallstring, 10);

// 		   printf("%s", ptr);

// }