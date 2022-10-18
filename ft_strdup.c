/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:12:24 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/01 15:37:49 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

str = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	ft_memcpy((void *)str, (void *)s, ft_strlen((char *)s));
	str[ft_strlen((char *)s)] = '\0';
	return ((char *)str);
}
