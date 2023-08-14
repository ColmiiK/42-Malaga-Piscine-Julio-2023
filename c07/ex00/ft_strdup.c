/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:45:26 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/27 11:34:33 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = "Hola Mundo";
	char *str2 = ft_strdup(str1);
	char *str3 = strdup(str1);

	printf("%s\n", str2);
	printf("%s\n", str3);
	free(str2);
	free(str3);
}
*/