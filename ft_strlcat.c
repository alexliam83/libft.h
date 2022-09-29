/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:37:38 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/27 11:05:22 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

// {
// 	unsigned int	i;
// 	unsigned int	i2;
// 	unsigned int	i3;
// 	unsigned int	j;

// i = 0;
// i2 = 0;
// i3 = 0;
// j = 0;
// 	while (src[i] != '\0')
// 	{
// 	i++;
// 	}
// 	while (dest[j] != '\0')
// 	{
// 		j++;
// 	}

// 	while ((i2 < size) && (i2 < j))
// 	{
// 		i3 = i;
// dest[i2] = src[i3];
// i3++;
// i2++;
// 	}
// dest[i] = '\0';
// 	return (i + size);
// }

// int        main(void)
// {
//     char    dest[50] = "holacaracola";
//     char    src[50] = "fisdgfsdgarma";

//     //printf("%u", ft_strlcat(dest, src, 7));
// 	//printf("\n");
// 	printf("%lu", strlcat(dest, src, 7));
// }

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		i;
	size_t		len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (*dst)
		dst++;
	i = 0;
	while ((i < size - (len - ft_strlen(src)) - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
