/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:00:59 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/19 11:21:44 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	x;
	int	is_negative;
	int	value;

	i = 0;
	x = 0;
	is_negative = 1;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		x = (x * 10) + (str[i] - '0');
		i++;
	}
	return (x * is_negative);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char str[] = "     ------+++++---1234";
	printf("ATOI CUSTOM:%d\n", ft_atoi(str));
	//printf("ATOI OFICIAL:%d\n", atoi(str));
	
}
*/