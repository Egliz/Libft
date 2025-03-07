/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:55:31 by emorillo          #+#    #+#             */
/*   Updated: 2024/11/02 17:28:49 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
	{
		return (size + src_len);
	}
	while ((dst_len + i) < (size - 1) && (src[i] != '\0'))
	{
		dst[dst_len + i] = src [i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	d[]= "Hola";
	char	s[]= "mundo";
	printf("antes, %s, %s", d, s);

	printf("Despues: %li", ft_strlcat(d,s,5));
	return 0;
}*/
