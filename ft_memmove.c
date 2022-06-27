/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:08 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/27 02:15:38 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*mem_src;
	unsigned char	*mem_dst;
	size_t			counter;

	mem_src = (unsigned char *)src;
	mem_dst = (unsigned char *)dest;
	counter = len;
	if (mem_src < mem_dst)
	{
		while (counter)
		{
			counter--;
			mem_dst[counter] = mem_src[counter];
		}
		return (dest);
	}
	ft_memcpy(mem_dst, mem_src, len);
	return (dest);
}
