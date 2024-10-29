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
	unsigned char ch;
	int		i;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	ch = (unsigned char)c;
	i = 0;
	res = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			res = &str[i];
		i++;
	}
	if (ch == '\0')
		return (&str[i]);
	return (res);
}
/*
int main()
{
    char    stri[]= "hola probando";
    char    let = 'a';
    char    orig[]= "hola probando";
    char    l = 'a';

    printf(" la mia %s\n", ft_strrchr(stri,let));
    printf(" la orig %s\n", strrchr(orig,l));

    return 0;
}*/
