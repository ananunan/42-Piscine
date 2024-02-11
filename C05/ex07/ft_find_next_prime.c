/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:58 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/30 09:22:16 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
	{
		return (2);
	}
	while (nb % x != 0)
	{
		x++;
	}
	if (nb == x)
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}
/*#include <stdio.h>
int main(void)
{
	int	numero;

	numero = 90;
	printf("%d", ft_find_next_prime(numero));
}*/
