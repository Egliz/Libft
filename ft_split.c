/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emorillo <emorillo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:13:01 by emorillo          #+#    #+#             */
/*   Updated: 2024/10/28 22:01:03 by emorillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int count_words(char const *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if ((i == 0 && str[i] != c) || (str[i] != c && \
					str[i -1] == c && i > 0))
		{
			word++;
		}
		i++;
	}
	return (word);
}

static char	*count_lett(char const **str, char c)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *)*str;
	while (s[i] && s[i] != c)
		i++;
	*s += i;
	return (ft_substr(s, 0, i));
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		k;
	char	**new;

	k = 0;
	if (s == NULL)
		return (NULL);
	j = count_words(s, c);
	new = malloc ((j + 1) * sizeof (char *));
	while (*s != '\0')
	{
		if (*s != c)
		{
			new[k] = count_lett(&s, c);
			if (new[k++] == NULL)
			{
				free_array(new);
				return (NULL);
			}
		}
		else
			s++;
	}
	new[k] = NULL;
	return (new);
}

   int	main()
   {
   char *str = "Hola que tal estas";
   char delimiter = ' ';
   char **result = ft_split(str, delimiter);

   if (result == NULL)
   {
   printf("Error en ft_split\n");
   return 1;
   }

// Mostrar el resultado de la función ft_split
for (int i = 0; result[i] != NULL; i++)
{
printf("Palabra %d: %s\n", i + 1, result[i]);
free(result[i]);  // Liberar cada palabra
}

free(result);  // Liberar el array
return 0;
}
