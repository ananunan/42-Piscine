/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:29:37 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 16:13:41 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

 #include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "Error!", 6);
	else
		printf ("%i", ft_strlen (argv[1]));
}
