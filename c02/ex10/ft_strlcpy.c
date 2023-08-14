/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:41:53 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/13 13:50:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char a[] = "Source";
	char b[] = "Destination";
	unsigned int c = 5;

	printf("STRING A = %s\n", a);
	printf("STRING B = %s\n", b);
	ft_strlcpy(a, b, c);
	printf("STRING cambiado = %s\n", a);
	return (0);
}
*/