/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:58:14 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/08 12:43:50 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// El orden es
//Primera línea/columna
//última línea/columna
//resto de líneas/columnas

void	ft_putchar(char c);

void	dibujar(int longitud, char izquierda, char centro, char derecha)
{
	int	j;

	j = 0;
	while (j < longitud)
	{
		if (j == 0)
			ft_putchar(izquierda);
		else
		{
			if (j == longitud - 1)
				ft_putchar(derecha);
			else
				ft_putchar(centro);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			dibujar(x, 'A', 'B', 'A');
		else
		{
			if (i == y - 1)
				dibujar(x, 'C', 'B', 'C');
			else
				dibujar(x, 'B', ' ', 'B');
		}
		i++;
	}
}
