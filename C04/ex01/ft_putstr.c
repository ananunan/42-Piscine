/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:40:56 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/21 17:18:43 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

/* #include <stdio.h>
int	main (int argc, char **argv)
{
	if (argc == 1)
		write (1, "ERROR!", 6);
	else
		ft_putstr (argv[1]);
}
 */