/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:53:10 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/18 15:26:51 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < j)
	{
		nb *= i;
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>

int main()
{
	int x = 4;

	printf("%i\n", ft_iterative_factorial(x));
}
*/