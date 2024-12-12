/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:18:52 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/05 11:58:00 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char	chr[2];

	chr[0] = (a / 10) + '0';
	chr[1] = (a % 10) + '0';
	write(1, &chr, 2);
}

void	ft_print_comb2(void)
{
	int	c;
	int	x;

	c = 0;
	while (c < 100)
	{
		x = 0;
		while (x < 100)
		{
			print(c);
			write(1, " ", 1);
			print(x);
			x++;
			write(1, ", ", 2);
		}
		c++;
	}
}
