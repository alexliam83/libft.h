/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:22:14 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 17:32:50 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (s);
}

// int main()
// {
// 	printf("%s", ft_strchr("amigo mio te quiero mucho", 'i'));
// }