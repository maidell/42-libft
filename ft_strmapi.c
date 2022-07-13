/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:16:46 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/06/25 18:51:49 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*ans;

	count = 0;
	ans = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!ans)
		return (NULL);
	while (s[count] != '\0')
	{
		ans[count] = f(count, s[count]);
		count++;
	}
	ans[count] = '\0';
	return (ans);
}
