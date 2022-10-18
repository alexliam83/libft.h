/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:49:30 by alejandg          #+#    #+#             */
/*   Updated: 2022/10/08 15:36:35 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	char	last;
	int		i;
	int		words;

	last = c;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (last == c && s[i] != c)
				words++;
			last = s[i];
			i++;
	}
	return (words);
}

static char	*word_fill(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

		split = malloc((ft_count(s, c) + 1) * sizeof(char **));
	if (!split || !s)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			split[j++] = word_fill(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
