/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:46:53 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/20 12:22:15 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

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

void	ft_swap(char **a, char **b)
{
	char	*caja;

	caja = *b;
	*b = *a;
	*a = caja;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	o;

	i = 1;
	j = i + 1;
	o = 1;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		j = i + 1;
		i++;
	}
	while (o < argc)
	{
		ft_putstr(argv[o]);
		o++;
	}
}
