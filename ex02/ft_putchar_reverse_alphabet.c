/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_reverse_alphabet.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:50:16 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/03 16:10:09 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_reverse_alphabet(void)
{
	char	z;

	z = 'z';
	while (z > 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_putchar_reverse_alphabet();
	return (0);
}*/
