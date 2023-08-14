/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:27:44 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/18 16:05:32 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	i = 1;
	x = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb *= x;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	int number = 4;
	int power = 3;
	printf("%i\n", ft_iterative_power(number, power));
}
*/