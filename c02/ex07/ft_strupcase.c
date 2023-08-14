/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:42:11 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/10 12:13:52 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
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
	ft_strupcase(str);
	printf("%s\n", str);
}
*/