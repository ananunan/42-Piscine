/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:43:26 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 15:08:46 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	if (dest[j + i] != '\0')
		dest[j + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

	int main()
{
	char	dest[] = "This is ana ";
	char	src[] = "banana ";
	printf ("%s", ft_strncat(src ,dest , 11));
	printf ("%s", strncat(src ,dest , 11)); */
}/*
