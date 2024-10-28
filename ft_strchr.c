/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:42:57 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/28 18:04:29 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c && *str != '\0')
		str++;
	if ((*str == c) || (*str == '\0'))
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

	n = 'o';
	result = ft_strchr(str, n);
	orig = strchr(str, n);
	printf("mio: %s\n", result);
	printf("original: %s\n", orig);
	return (0);
	
}*/
