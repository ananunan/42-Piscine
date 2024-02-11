/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:51 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/30 09:22:24 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 1)
	{
		return (0);
	}
	while (nb % x != 0)
	{
		x++;
	}
	if (nb == x)
	{
		return (1);
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	int	numero;

	numero = 97;
	printf("%d", ft_is_prime(numero));
}*/
