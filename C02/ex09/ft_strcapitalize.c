/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 23:05:02 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/20 14:40:19 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str [i] + 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i++;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowercase (str);
	while (str[i] != '\0')
	{
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
