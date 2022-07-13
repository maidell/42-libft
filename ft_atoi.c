/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 05:15:40 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/07/12 04:37:15 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	while ((ft_isspace(*str)))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = (num * 10);
		num = num + sign * (*str - '0');
		str++;
	}
	return (num);
}
