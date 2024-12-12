/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:04:39 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/08 15:02:48 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		temp;
	int		end;
=======
#include <stdio.h>

void    ft_rev_int_tab(int  *tab, int   size)
{
	int start;
	int temp;
	int end;
>>>>>>> 0f6d13fe774470d85f54d00cb23bc307d9772d05

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab [end] = temp;
		start++;
		end--;
	}
}
