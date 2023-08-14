/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:51:53 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/13 14:53:33 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
#include <stdio.h>

int main()
{
	char *str;
	int longitud;

	str = "Hello World!";
	longitud = ft_strlen(str);
	printf("This string is %d characters long\n", longitud);
	return 0;
}
*/