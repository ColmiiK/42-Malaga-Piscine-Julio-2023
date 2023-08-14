/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvarvg@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:53:10 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/05 15:43:05 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	numeritos(int i)
{
	int	decenas;
	int	unidades;

	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		decenas = i / 10;
		unidades = i % 10;
		ft_putchar(decenas + '0');
		ft_putchar(unidades + '0');
	}
}

void	ft_print_comb2(void)
{
	int	primer_numero;
	int	segundo_numero;

	primer_numero = 0;
	while (primer_numero <= 99)
	{
		segundo_numero = primer_numero + 1;
		while (segundo_numero <= 99)
		{
			numeritos(primer_numero);
			ft_putchar(' ');
			numeritos(segundo_numero);
			if (primer_numero < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			segundo_numero++;
		}
		primer_numero++;
	}
}
