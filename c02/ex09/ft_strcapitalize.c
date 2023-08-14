/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:17:33 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/21 11:34:06 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		while (str[j] > 64 && str[j] < 91)
		{
			str[j] = str[j] + 32;
			j++;
		}
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
				str[i] -= 32;
			i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}
