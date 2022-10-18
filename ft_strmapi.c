/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:27:51 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/03 12:45:13 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
str = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
	str[i] = f(i, (char)s[i]);
	i++;
	}
	str[i] = '\0';
	return (str);
}
