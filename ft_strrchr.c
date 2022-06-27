/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:54 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 23:13:36 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Is the same as strchr but searches for the last occurrence of the character 
// c (a unsigned char) in the string pointed to by the str argument.
char	*ft_strrchr(const char	*s, int c)
{
	char	finder;
	int		len;
	char	*found_c;

	finder = c;
	found_c = NULL;
	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len);
	while (*s)
	{
		if (*s == finder)
			found_c = (char *) s;
		s++;
	}
	return ((char *)found_c);
}
