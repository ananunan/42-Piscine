/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:16:12 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/24 12:33:14 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 1)
	{
		while (argv[i] != NULL)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
