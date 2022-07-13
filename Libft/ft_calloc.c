/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:15:45 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/07/13 20:15:03 by mmaidel-         ###   ########.fr       */
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
	if (n_items != 0 && ((len / n_items) != size))
		return (NULL);
	memory = (void *)malloc(size * n_items);
	if (!memory)
		return (NULL);
	ft_bzero (memory, len);
	return (memory);
}
