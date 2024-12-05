/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:46:11 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/03 16:12:55 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	char	chr[3];

	chr[0] = (a / 10) + '0';
	chr[1] = (a % 10) + '0';
	chr[2] = ',';
	write(1, &chr, 3);
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
			print(x);
			print(c);
			x++;
			write(1, " ", 1);
		}
		c++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
