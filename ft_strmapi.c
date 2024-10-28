/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:41:27 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/24 20:12:59 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	ft;
	char	*new;

	i = 0;
	if (s == NULL)
		return (NULL);
	new = malloc (ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ft = f(i, s[i]);
		new[i] = ft;
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char	my_ft(unsigned int n, char c)
{
	return (c + n);
}

int main()
{
	char	str[]= "HOLA MUnDo";
	char	*result = ft_strmapi(str, my_ft);
	printf("Esta es %s", result);
	free (result);
	return (0);

}*/
