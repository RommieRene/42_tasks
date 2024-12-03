/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:48:14 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/03 13:31:36 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	n;
	char	m;
	char	k;

	n = '0';
	while (n < '7')
	{
		m = n + 1;
		while (m < '8')
		{
			k = m + 1;
			while (k < '9')
			{
				write(1, &n, 1);
				write(1, &m, 1);
				write(1, &k, 1);
				write(1, ", ", 2);
				k++;
			}
			m++;
		}
		n++;
	}
}
/*int	main()
{
	ft_print_comb();
	return (0);
}*/
