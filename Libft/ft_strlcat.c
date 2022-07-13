/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:37 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 22:23:09 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Appends src to string dst of size size (unlike strncat, size is the
 * full size of dst, not space left).  At most size-1 characters
 * will be copied.  Always NUL terminates (unless size <= strlen(dst)).
 * Returns strlen(initial dst) + strlen(src); if retval >= size,
 * truncation occurred.
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	iterator;
	size_t	len;

	iterator = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	iterator = len;
	while (src[len - iterator] && (len + 1) < size)
	{
		dest[len] = src[len - iterator];
		len++;
	}
	if (iterator < size)
		dest[len] = '\0';
	return (iterator + ft_strlen(src));
}
