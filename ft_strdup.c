/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:43:17 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:53:32 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	dest = malloc (sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "";
	char *dest= ft_strdup(src);
	printf("String (my function): %s.\n", src);
	printf("Duplicate (my function): %s.\n", dest);
	printf("Original string: %s.\n", src);
	printf("Original duplicate: %s.\n", dest);
	free(dest);
	return (0);
}
*/
