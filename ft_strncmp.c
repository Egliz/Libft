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
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (str1 == NULL || str2 == NULL)
		return (0);
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n - 1)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int main(void)
{
    
    char    st1[] = "Hola";
    char    st2[] = "Holb";
	char	original1[] = "Hola";
	char	original2[] = "Holb";
	size_t	nb;
    size_t  nbo;
	ng = 3;
    nn = 3;
    printf("Mi funcion %i\n", ft_strncmp(st11, st2, nb));
	printf("La orignal %i", strncmp(ori1, ori2, nbo));

    return (0);
}*/
