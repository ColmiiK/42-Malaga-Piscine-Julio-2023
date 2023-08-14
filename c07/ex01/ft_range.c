/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:12:07 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/26 16:06:37 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;

	if (min >= max)
		return (0);
	range = max - min;
	array = (int *)malloc(sizeof(int) * (range));
	if (array == NULL)
		return (0);
	range = 0;
	while (max > min)
	{
		array[range] = min;
		min++;
		range++;
	}
	return (array);
}

/*
#include <stdio.h>

int	main(void)
{
	int	minimum;
	int	maximum;
	int	size;
	int	i;
	int	*array;

	minimum = -100;
	maximum = 100;
	i = 0;
	array = ft_range(minimum, maximum);
	size = maximum - minimum;
	while (i < size)
	{
		printf("%i ", array[i]);
		i++;
	}
	free(array);
}
*/