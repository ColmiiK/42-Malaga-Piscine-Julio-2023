/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:14:49 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/10 12:16:42 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
			i++;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char str[] = "abcdefg";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
}
*/