/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:05:43 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/28 16:27:56 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write (1, &c, 1);
	write (1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (a / 10 + '0', a % 10 + '0');
			write(1, " ", 1);
			ft_putchar (b / 10 + '0', b % 10 + '0');
			if (a != 98)
				write(1, ", ", 2);
			b = b + 1;
		}
		a = a + 1;
	}
}
/*
 int	main()
{
	ft_print_comb2();
}norm*/