/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:15:45 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/27 04:04:59 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// allocates the requested memory sets the memory to zero and returns a 
// pointer to it. 
void	*ft_calloc(size_t n_items, size_t size)
{
	void	*memory;
	int		len;

	len = n_items * size;
	memory = malloc(len);
	if (!memory)
		return (NULL);
	ft_bzero (memory, len);
	return (memory);
}
