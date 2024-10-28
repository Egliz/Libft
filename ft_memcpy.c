/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:47:32 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:47:36 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*l_dest;
	const unsigned char	*l_src;
	size_t				i;

	l_dest = (unsigned char *)dest;
	l_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		l_dest[i] = l_src[i];
		i++;
	}
	return (dest);
}
