/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvarvg@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:02:27 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/07 09:45:13 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main()
{
	int i;
	int j;
	int div;
	int mod;

	i = 15;
	j = 7;

	printf("%d entre %d es...\n", i, j);
	ft_div_mod(i, j, &div, &mod);
	printf("%d y el resto es %d\n", div, mod);
	return 0;
}
*/