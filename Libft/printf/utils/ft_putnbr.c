/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 06:34:30 by mmaidel-          #+#    #+#             */
/*   Updated: 2023/01/15 06:34:32 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_int(int i)
{
	char	c;

	c = '0';
	c = c + i;
	write(1, &c, 1);
}

int	ft_putnbr(long int n)
{
	int	i;
	int	count_size;	

	i = 1;
	count_size = 0;
	if (n == -2147483648)
		return (ft_printf("-2147483648"));
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		count_size = 1;
	}
	while (i <= n / 10)
		i = i * 10;
	while (i >= 1)
	{
		ft_putchar_int(n / i);
		n = n - (n / i) * i;
		i = i / 10;
		count_size++;
	}
	return (count_size);
}
