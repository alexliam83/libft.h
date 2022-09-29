/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:50:20 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 12:50:46 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)

{
	int	resul;
	int	signominus;
	int	i;

resul = 0;
signominus = 0;
i = 0;
	while ((str[i] != '\0' && str[i] < 48) || (str[i] > 57))
	{
		if (str[i] == '-')
		{
		signominus++;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		resul = resul * 10 + str[i] - 48;
		i++;
	}
	if (signominus % 2 == 1)
	{
		return (resul * -1);
	}
	return (resul);
}
// int	main(void)
// {
// 	char	*str;
// 	str = "   ---+--+1234ab567";
// 	printf("%d \n", ft_atoi(str));
// 	return 0;

// }