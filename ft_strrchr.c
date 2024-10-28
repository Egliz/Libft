/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:06:40 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 21:33:53 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*res;
	int		i;

	if (s == NULL)
		return (0);
	str = (char *)s;
	i = 0;
	res = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			res = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (res);
}
/*
int main()
{
   // char    stri[]= "hola probando";
   // char    let = 'o';
   // char    orig[]= "hola probando";
   // char    l = 'o';

    printf(" la mia %s\n", ft_strrchr("Hola Mundo", 'H'));
    // printf(" la orig %s\n", strrchr(orig,l));

    return 0;
}*/
