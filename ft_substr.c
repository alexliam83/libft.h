/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:40:53 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/02 18:17:56 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	char	*str;
	size_t	len2;

i = 0;
len2 = ft_strlen((char *)s);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len + start > ft_strlen((char *)s))
	{
			len2 = ft_strlen((char *)s) - start;
			len = len2;
	}
str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	while ((s[start] != 0) && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
