/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:50:36 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/09 10:29:31 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	caja;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		caja = tab[i];
		tab[i] = tab[j];
		tab[j] = caja;
		i++;
		j--;
	}
}

/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int tab[] = {1,2,3,4,5};
    int size = sizeof(tab) / sizeof(tab[0]);

    for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
		}

    ft_rev_int_tab(tab, size);
	printf("\n");
    for(int i = 0; i < size; i++)
	{
        printf("%d ", tab[i]);
    	}

    return 0;
}
*/