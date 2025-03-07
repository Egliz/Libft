/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:14:10 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:54:07 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void my_ft(unsigned int index, char *c) {
    if (*c == 'a') {
        *c = 'x';
    }
}

int main()
{
	char	str[] = "Hola munado";
	ft_striteri(str, my_ft);
	printf("Esta es la string %s", str);
	return (0);
}*/
