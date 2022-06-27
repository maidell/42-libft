/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:49 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/26 06:22:19 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// iterates between s1 and s2 and compares, 
// if return < 0 then indicates that s1 < str2.
// if return > 0 then indicates that str2 < str1.
// if return = 0 then indicates that s1 == str2. 

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n && (s1[counter] != '\0' || s2[counter] != '\0'))
	{
		if ((unsigned char)s1[counter] != (unsigned char)s2[counter])
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		counter++;
	}
	return (0);
}
