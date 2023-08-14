/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:12:14 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/13 13:57:25 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while ((n - 1) && s1[i] && (s1[i] == s2[j]))
	{
		i++;
		j++;
		n--;
	}
	return (s1[i] - s2[j]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char string1[] = "ABCDe";
	char string2[] = "ABCDf";
	unsigned int chars_to_compare = 10;

	int resultado = ft_strncmp(string1, string2, chars_to_compare);
	int resultado_ofi = strncmp(string1, string2, chars_to_compare);
	printf("%d\n", resultado);
	printf("%d\n", resultado_ofi);
}
*/