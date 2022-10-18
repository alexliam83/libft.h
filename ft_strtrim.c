/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:55:02 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/03 12:05:12 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	int		start;
	int		end;
	char	*sub;

	start = 0;
	end = -1;
	if (!set)
		return ((char *)s1);
	if (!s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
end = (int)ft_strlen((char *)s1) - 1;
	while (end > 0 && ft_strchr(set, s1[end]))
		end--;
	sub = ft_substr(s1, start, (end - start + 1));
	return (sub);
}
