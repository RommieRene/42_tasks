/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:23:33 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/08 15:04:42 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *arr, int i, int j)
{
	int	temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	min;

	start = 0;
	while (start < size - 1)
	{
		min = 0;
		while (min < size - start - 1)
		{
			if (tab[min] > tab[min + 1])
			{
				swap(tab, min, min + 1);
			}
			min++;
		}
		start++;
	}
}
