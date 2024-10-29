/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:53:04 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:35:53 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	i;

	i = 0;
	if ( n == 0)
		return(0);
	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char    s1[]= "Hola";
    char    s2[]= "Holb";
    size_t  n;

    n = 3;
    printf("Mi funcion %i\n", ft_strncmp(s1, s2, n));
    printf("La orignal %i\n", strncmp(s1, s2, n));

    return (0);
}*/
