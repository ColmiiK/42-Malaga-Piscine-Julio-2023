/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:27:52 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/20 15:37:50 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char c)
{	
	char	hex[2];

	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
	{
		hex[0] = "0123456789abcdef"[(c >> 4) & 0x0F];
		hex[1] = "0123456789abcdef"[c & 0x0F];
		write(1, "\\", 1);
		write(1, hex, 2);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_print_chars(str[i]);
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/