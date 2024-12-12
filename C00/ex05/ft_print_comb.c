/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:17:18 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/05 10:13:01 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char n, char m, char k)
{
	write(1, &n, 1);
	write(1, &m, 1);
	write(1, &k, 1);
	if (n == '7' && m == '8' && k == '9')
		return ;
	else
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n;
	char	m;
	char	k;

	n = '0';
	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			k = m + 1;
			while (k <= '9')
			{
				print(n, m, k);
				k++;
			}
			m++;
		}
		n++;
	}
}
