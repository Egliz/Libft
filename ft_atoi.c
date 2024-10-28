/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_atoi.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: emorillo <emorillo@student.42barcel>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2024/10/12 17:37:23 by emorillo		   #+#	  #+#			  */
/*	 Updated: 2024/10/27 20:22:09 by emorillo		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || (*nptr == 32))
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
//char	  str[] = "2147abc483647";
char	str[] = "2147483650";
printf("Mi funcion (ft_atoi): %i\n", ft_atoi(str));
printf("Funcion original (atoi) %i\n", atoi(str));
return (0);
}*/
