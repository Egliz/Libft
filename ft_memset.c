/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:49:38 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:49:49 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*local_s;

	local_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		local_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[]="Hhoollaa";
	int	ca;
	size_t	nu;

	ca = 'a';
	nu = 4;

	printf("probando %s ", (char *)ft_memset(str, ca, nu));
	return (0);
}*/
