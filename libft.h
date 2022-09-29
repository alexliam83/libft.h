/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandg <alejandg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:45:24 by alejandg          #+#    #+#             */
/*   Updated: 2022/09/29 12:51:00 by alejandg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
size_t			ft_strlen(char *str);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
char			*ft_strchr(const char *str, int c);
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_strlcat(char *dst, char *src, size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi(char *str);

#endif