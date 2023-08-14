/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:52:48 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/26 16:06:27 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	x;
	int	size;

	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * (size));
	if (array == NULL)
		return (-1);
	while (max > min)
	{
		array[x] = min;
		min++;
		x++;
	}
	*range = array;
	return (size);
}

/*
#include <stdio.h>

int	main(void)
{
	int	minimum;
	int	maximum;
	int *pi = 0;
	int i;

	minimum = -10;
	maximum = 10;
	i = ft_ultimate_range(&pi, minimum, maximum);
	printf("%i\n", i);
	free(pi);
}
*/