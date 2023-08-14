/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvarvg@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:29:32 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/07 09:53:45 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	resto;

	division = *a / *b;
	resto = *a % *b;
	*a = division;
	*b = resto;
}

/*
#include <stdio.h>

int main()
{
	int i;
	int j;
	int *pi = &i;
	int *pj = &j;

	i = 22;
	j = 7;
	printf("%d entre %d es...\n", i, j);
	ft_ultimate_div_mod(pi, pj);
	printf("%d y el resto es %d\n", i, j);
	return 0;
}
*/