/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:20:29 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 20:29:48 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	tsize;

	tsize = nmemb * size;
	if (nmemb != 0 && size != 0 && tsize / nmemb != size)
		return (NULL);
	pointer = malloc(tsize);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, tsize);
	return (pointer);
}
/*
int	main()
{
	size_t	num;
	num = 10;

	printf("Mi funcion %p\n", ft_calloc(num, sizeof(int)));
	printf("Funcion original %p", calloc(num,sizeof(int)));
	return (0);

}
*/
