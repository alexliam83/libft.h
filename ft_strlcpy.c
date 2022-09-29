/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:38:17 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/26 10:57:56 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)

{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	src[20] = "amigos";
// 	char	dest[20] = "cucu";
// 	unsigned int size = 4;
// 	// int	cont;
// 	//ft_strlcpy(dest, src, size);
// 	strlcpy(dest, src, size);
// 		printf("%s", dest);
// 		printf("%c", '\n');
// 		printf("%d", size);
// }