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
/*#include <stdlib.h>*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (pointer != NULL)
	{
		ft_bzero(pointer, nmemb * size);
		return (pointer);
	}
	return (NULL);
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
