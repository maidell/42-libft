/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:29 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/27 04:42:05 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicates the same space occupied by s up to 0 and returns a pointer to 
// the duplicated string
char	*ft_strdup(const char *s)
{
	char	*str_dst;
	int		s_len;

	s_len = ft_strlen(s) + 1;
	str_dst = malloc(s_len);
	if (!str_dst)
		return (NULL);
	ft_strlcpy(str_dst, s, s_len);
	return (str_dst);
}
