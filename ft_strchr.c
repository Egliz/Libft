/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:42:57 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/31 21:43:52 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	char			*str;

	str = (char *)s;
	ch = (unsigned char)c;
	while (*str != ch && *str != '\0')
		str++;
	if ((*str == ch) || (ch == '\0'))
		return (str);
	else
		return (NULL);
}
/*
int	main(void)
{
	int	n;
	const char	str[]= "Hello world";
	char	*result;
	char	*orig;

	n = '\0';
	result = ft_strchr(str, n);
	orig = strchr(str, n);
	printf("mio: %s\n", result);
	printf("original: %s\n", orig);
	return (0);
	
}*/
