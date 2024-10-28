/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:46:16 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/28 19:52:29 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
//	if (n == 0)
//		return (NULL);
	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2 && i < n)
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}

int main(void)
{


	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	/* 1 */ printf("copia; %i",ft_memcmp(s, sCpy, 4));
	/* 2 */ printf("copia; %i",ft_memcmp(s, s2, 0));
	/* 3 */ printf("copia; %i",ft_memcmp(s, s2, 1) > 0);
	/* 4 */ printf("copia; %i",ft_memcmp(s2, s, 1) < 0);
	/* 5 */ printf("copia; %i",ft_memcmp(s2, s3, 4) != 0);
	return (0);
}
/*
int	main()
{
	char	st1[] = "Hello world";
	char	st2[] = "Hello world!";
	char	s1[] = "Hello world";
	char	s2[] = "Hello world!";
	int	result;
	int	original;

	result = ft_memcmp(st1, st2, 0);
	original = memcmp (s1, s2, 0);

	printf("copia: %i\n, original: %i\n", result, original);

	if (result == 0 )
		printf("Los bloques de memoria son iguales\n");
	else if (result < 0)
		printf("El bloque 1 es menor que el bloque 2\n");
	else
		printf("El bloque 2 es menor que el bloque 1\n");
	
	if (original == 0)
		printf("Memory blocks are the same");
	else if (original < 0)
		printf("Block 1 is smaller than block 2");
	else 
		printf("Block 2 is smaller than block 1");
	return (0);
}*/
