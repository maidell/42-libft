/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:26 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 23:09:07 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// function searches for the 1st occurrence of the character c (unsigned char)
// in the string pointed to by the argument str.
// This returns a pointer to the first occurrence of the character c in the 
// string str, or NULL if the character is not found.
char	*ft_strchr(const char *s, int c)
{
	char	finder;

	finder = c;
	while (*s != finder)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
