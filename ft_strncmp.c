/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:57:51 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 12:49:06 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;
	int				result;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	result = 0;
	while ((ss1[i] != '\0' || ss2[i] != '\0') && (i < n))
	{
		if (ss1[i] != ss2[i])
		{
			result = ss1[i] - ss2[i];
			return (result);
		}
		i++;
	}
	return (result);
}

// int main(void)
// {

// printf("%d", ft_strncmp("zapato", "zorro", 4));
// printf("\n");
// printf("%d", strncmp("zapato", "zorro", 4));

// }