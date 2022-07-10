/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:51 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 22:45:48 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The function iterates little into big in at most len, 
// If little == "\0", *big is returned; 
// if little is not found in big, NULL is returned; 
// If little is found in big, returns the pointer to the first character in big
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i1;
	size_t	i2;

	i1 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i1] != '\0')
	{
		i2 = 0;
		while (big[i1 + i2] == little[i2] && (i1 + i2) < len)
		{
			if (big[i1 + i2] == '\0' && little[i2] == '\0')
				return ((char *)&big[i1]);
			i2++;
		}
		if (little[i2] == '\0')
			return (&((char *)big)[i1]);
		i1++;
	}
	return (0);
}
