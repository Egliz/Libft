/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:38:50 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 19:32:51 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	byte;
	char			*str;
	size_t			i;

	str = (char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == byte)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
/*
int	main()
{
	char	string[] = "Hola mundo!";
	char	letter = 'a';
	size_t	n = 8;

	
	printf("%s\n %p\n", string, ft_memchr(string, letter, n));
	printf("Soy la original, %s\n %p\n", string, memchr(string, letter, n));
	return (0);
}*/
