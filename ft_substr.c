/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:08:47 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/31 22:16:59 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			slen;
	unsigned int	i;

	i = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start > slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	sub = malloc (len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
   int main ()
   {
   char string [] = "hello world";
   int start= 2;
   int len = 5;
   char    *sub = ft_substr(string, start, len);

   printf("Esta es la substring:%s\n", sub);
   free (sub);
   }*/
