/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:45:58 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:58:31 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	i = 0;
	j = ft_strlen(s1) - 1;
	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	new = malloc (j - i + 2);
	if (new == NULL)
		return (NULL);
	len = 0;
	while (i <= j)
	{
		new[len] = s1[i];
		i++;
		len++;
	}
	new[len] = '\0';
	return (new);
}
/*
int	main()
{
	char	str[]= "aabcdHola mundoabcd";
	char	sett[] = "abcd";
	char	*new = ft_strtrim(str, sett);
	printf("La string %s", new);
	free(new);
}
*/
