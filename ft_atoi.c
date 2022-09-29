/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:50:20 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 16:10:28 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include <stdlib.h>

// int	ft_atoi(char *str);

// int	ft_atoi(char *str)

// {
// 	int	resul;
// 	int	signominus;
// 	int	i;

// resul = 0;
// signominus = 0;
// i = 0;

// 	if (str[i] == '\e')
// 		return (0);
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	while ((str[i] != '\0' && str[i] < 48) || (str[i] > 57))
// 	{
// 		if (str[i] == '-')
// 		{
// 		return (resul * -1);
// 		}
// 		i++;
// 		if (str[i] == 32 || str[i] == '+')
// 		return (resul);
// 	}

// 	while (str[i] >= 48 && str[i] <= 57)
// 	{
// 		resul = resul * 10 + str[i] - 48;
// 		i++;
// 	}
// 	if (signominus == 1)
// 	{
// 		return (resul * -1);
// 	}

// 	if (signominus > 1)
// 		return (0);
// 	return (resul);
// }
// int	main(void)
// {
// 	char	*str;
// 	str = "   +123";
// 	printf("%d \n", ft_atoi(str));
// 	printf("\n");
// 	printf("%d", atoi(str));
// }

int	ft_atoi(const char *str)

{
	int	i;
	int	sign;
	int	num;

i = 0;
sign = 1;
num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
	num = num * 10;
	num += str[i] - '0';
	i++;
	}
	return (sign * num);
}

// int	main(void)
// {
// 	char	*str;
// 	str = "   -+123";
// 	printf("%d \n", ft_atoi(str));
// 	printf("\n");
// 	printf("%d", atoi(str));
// }