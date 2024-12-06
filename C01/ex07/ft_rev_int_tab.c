/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiragos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 23:04:39 by rgiragos          #+#    #+#             */
/*   Updated: 2024/12/05 23:15:45 by rgiragos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int x;
	int	*rev;
	int i;
    rev = tab;
    i = size - 1;
    x = 0;
    while(i > x)
    {   tab[x] = rev[i];
        i--;
        x++;
        printf("%d%d",tab[x],tab[i]);
    }
    

}

int main(void)
{   
    int c[] = {1,2,3,4,5,6,7,8};
    ft_rev_int_tab(c, 8);

    return (0);
    }
    






	
