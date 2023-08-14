/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:41:19 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/10 10:13:07 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
#include <stdio.h>

int	main()
{
	char a[] = "This is the wrong string";
	char b[] = "Hello World!";

	printf("STRING A = %s\n", a);
	ft_strcpy(a, b);
	printf("STRING A = %s\n", a);
	return (0);
}
*/