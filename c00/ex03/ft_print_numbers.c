/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvarvg@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:31:21 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/05 09:35:21 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numeros;

	numeros = 48;
	while (numeros <= 57)
	{
		write(1, &numeros, 1);
		numeros++;
	}
}
