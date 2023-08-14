/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:16:48 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/10 11:16:41 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	char a[] = "aasdasdasd13123123";

	printf("%d\n", ft_str_is_alpha(a));
}
*/