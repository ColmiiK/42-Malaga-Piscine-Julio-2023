/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:36:55 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/08 15:56:15 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	caja;

	caja = *b;
	*b = *a;
	*a = caja;
}

/*
#include <stdio.h>

int main()
{
	int i;
	int j;

	i = 69;
	j = 420;
	printf("%d, %d\n", i, j);
	ft_swap(&i, &j);
	printf("%d, %d\n", i, j);
	return 0;
}
*/