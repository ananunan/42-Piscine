/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:43:29 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/20 20:47:52 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	g;

	i = 0;
	g = 0;
	while (dest[i] != '\0')
		i++;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		g++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* #include <stdio.h>

int	main()
{
	char src[] = "This is ana";
	char dest[] = " banana.";
	printf("%s", ft_strcat(dest, src));
} */