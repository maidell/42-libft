/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:24 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/07/13 20:32:44 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(const char *s, char c)
{
	int	count;
	int	i;
	int	aux;

	count = 0;
	aux = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && aux == 0)
		{
			aux = 1;
			count++;
		}
		else if (s[i] == c)
			aux = 0;
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, int start, int end)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		pos;
	int		start;

	i = 0;
	pos = 0;
	start = -1;
	split = malloc(sizeof(char *) * (nb_words(s, c) + 1));
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[pos++] = ft_strndup(s, start, i);
			start = -1;
		}
		i++;
	}
	split[pos] = NULL;
	return (split);
}
