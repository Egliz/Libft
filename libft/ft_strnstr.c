/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:03:33 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:57:40 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	i;
	size_t	j;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	j = 0;
	if (*l == '\0')
		return (b);
	while (b[i] != '\0')
	{
		while (b[i + j] == l[j] && (j + i) < len)
		{
			if (l[j + 1] == '\0')
			{
				return ((char *) &b[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	    char    bigg[] = "Hola qiu que tal";
		//char	b_orig[] = "Hola qiu que tal";
		//char	l_orig[] = "que";
		char    litle[] = "que";
	    size_t    n;
		//size_t	n_orig;
	
	    n = 20;
		//n_orig = 20;
	    printf("%s\n", ft_strnstr(bigg, litle, n));
		//printf("Soy la original, %s", strnstr(b_orig, l_orig, n_orig));
	    return (0);
}*/
