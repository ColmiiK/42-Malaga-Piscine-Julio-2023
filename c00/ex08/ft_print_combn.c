/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:16:59 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/13 13:04:06 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	comb_number(int start, int n)
{
	int i;

	if (n == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
		return;
	}
	i = start + 1;
	while (i < 10)
	{
		ft_putchar(start + '0');
		ft_putchar(i + '0');
		comb_number(i, n - 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	comb_number(0, n);
}


int main()
{
	ft_print_combn(2);
}