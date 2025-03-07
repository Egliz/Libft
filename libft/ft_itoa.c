/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:46:19 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/27 22:45:03 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_size(long int num)
{
	int		i;

	i = 1;
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

static char	*ft_positive(long int num)
{
	char			*new;
	long int		i;

	i = ft_size(num);
	new = (char *) malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new[i] = '\0';
	while (i > 0)
	{
		new[i - 1] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	return (new);
}

static char	*ft_negative(long int num)
{
	char		*new;
	long int	i;

	i = ft_size(-num) + 1;
	new = (char *) malloc (sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new[i] = '\0';
	if (num < 0)
		num = num * -1;
	new[0] = '-';
	while (i > 1)
	{
		new[i - 1] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	return (new);
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*new;

	num = n;
	new = NULL;
	if (num < 0)
		new = ft_negative(num);
	else if (num >= 0)
		new = ft_positive(num);
	return (new);
}
/*
int	main()
{
	long int num;

	num = -2147483648;
	char	*result = ft_itoa(num);
	printf("numero %s", result);
	free(result);
	return (0);

}*/
