/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:42 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:38:48 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*local_s;

	local_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		local_s[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	str[]= "abcde";

	printf("antes %s \n", str);
	ft_bzero(str, 2);
	printf("Despues %s", str);
	return (0);
}
*/
