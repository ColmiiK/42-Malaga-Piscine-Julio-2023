/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:18:21 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/27 11:43:23 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*malloc_allocation(int size, char **strs, char *sep)
{
	int		x;
	int		i;
	int		j;
	char	*p;

	if (size == '0')
		return (p);
	x = ft_strlen(sep);
	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(strs[i]);
		if (i < size - 1)
			j += x;
		i++;
	}
	p = (char *)malloc(sizeof(char) * (j + 1));
	if (p == NULL)
		return (NULL);
	else
		return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		pos;
	char	*p;

	i = 0;
	i = 0;
	pos = 0;
	p = malloc_allocation(size, strs, sep);
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			p[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				p[pos++] = sep[j++];
		}
		i++;
	}
	p[pos] = '\0';
	return (p);
}

#include <stdio.h>

int	main(void)
{
	char **strs;
	strs = (char **)malloc(7 * sizeof(char *));
	strs[0] = "Víctor";
	strs[1] = "le";
	strs[2] = "dice";
	strs[3] = "a";
	strs[4] = "Joel";
	strs[5] = "toma";
	strs[6] = "mango";
	char *sep = "----////----";
	char *dest = ft_strjoin(0, strs, sep);
	printf("%s\n", dest);
	free(dest);
	return (0);
}
