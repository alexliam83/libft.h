/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:52:50 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/07 11:21:08 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		size++;
n /= 10;
	}
	return (size);
}

char	*ft_utoa(int n, long int nbr, char *str, int size)

{
	if (n < 0)
	{
			str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
			str[size - 1] = (nbr % 10) + 48;
			nbr /= 10;
size--;
	}
	return (str);
}

char	*ft_itoa(int n)

{
	char			*str;
	long int		nbr;
	int				size;

	nbr = n;
	size = ft_size(n);
str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
str[size] = '\0';
	if (n == 0)
		str[0] = '0';
	return (ft_utoa(n, nbr, str, size));
}
