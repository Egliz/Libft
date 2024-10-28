/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:58:02 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:54:37 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	new = malloc (ft_strlen(&s1[i]) + ft_strlen(&s2[j]) + 1);
	if (new == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main()
{

char	st1[]= "Hola ";
char	st2[]= "mundo!";
char	*subs = ft_strjoin(st1, st2);

printf("La substring: %s\n", subs);
free(subs);
return (0);
}*/
