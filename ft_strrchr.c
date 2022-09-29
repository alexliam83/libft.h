/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:23:08 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 11:58:20 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strrchr(const char *str, int c)
// {
// 	char	*s;

// 	s = (char *)str;
// 	if (c == '\0')
// 	{
// 		return ("\0");
// 	}
// 	if (*str == '\0')
// 	{
// 		return (NULL);
// 	}
// 	while (*s != '\0')
// 	{
// 		s++;
// 	}
// 	if (*s != c)
// 	{		
// 		while ((*s != c) && (*s != -1))
// 		{
// 		s--;
// 		}
// 		if (*s == c)
// 		{
// 			return (s);
// 		}
// 		else
// 		{
// 			return (NULL);
// 		}
// 	}
// 	return (NULL);
// }

// int	main(void)
// 	{
// 	printf("%s", ft_strrchr("amigo mio te quiero mucho", '\0'));
// }
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp)
		tmp++;
	if (c == '\0')
	{
		return ((char *)tmp);
	}
	while (--tmp >= s)
	{
		if (c == *tmp)
		{
			return ((char *)tmp);
		}
	}
	return (NULL);
}
