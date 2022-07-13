/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:03 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 22:44:31 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// iterates between s1 and s2 and compares the first len bytes of memory 
// area str1 and memory area str2 .
// if return < 0 then indicates that s1 < str2.
// if return > 0 then indicates that str2 < str1.
// if return = 0 then indicates that s1 == str2. 
int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*usgn_b1;
	unsigned char	*usgn_b2;
	size_t			i;

	usgn_b1 = (unsigned char *)s1;
	usgn_b2 = (unsigned char *)s2;
	i = 0;
	while (i < len)
	{
		if (usgn_b1[i] != usgn_b2[i])
			return ((int)(usgn_b1[i] - usgn_b2[i]));
		if (len == 0)
			return ((int)len);
		i++;
	}
	return (0);
}
