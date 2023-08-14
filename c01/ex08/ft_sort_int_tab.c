/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:40:18 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/15 13:56:05 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

/*
#include <stdio.h>

int main()
{
	int array[5] = {3,1,4,5,2};
	int size_of_array = 5;

	for(int i = 0; i < size_of_array; i++)
		printf("%d ", array[i]);
    ft_sort_int_tab(array, size_of_array);
	printf("\n");
    for(int i = 0; i < size_of_array; i++)
        printf("%d ", array[i]);
    return 0;
}
*/