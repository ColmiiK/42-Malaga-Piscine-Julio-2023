/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:57:52 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/19 10:45:35 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j])
	{
		while (str[j + i] == to_find[i] && to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str + j);
		else
			i = 0;
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char haystack[] = "one two three four five six seven eight";
	char needle[] = "nine";

	printf("%s\n", ft_strstr(haystack, needle));
	printf("%s\n", strstr(haystack, needle));
}*/