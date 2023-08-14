/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:48:39 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/13 13:55:48 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

/*
#include <stdio.h>

int	main(void)
{
	char string1[] = "aBCD";
	char string2[] = "abcd";

	int resultado = ft_strcmp(string1, string2);
	ft_strcmp(string1, string2);
	printf("%d\n", resultado);
}
*/