/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:00 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/28 20:05:04 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*#include <stdio.h>
int main(void)
{
	int x;
	int pot;

	x = 3;
	pot = 2;

	printf("%d", ft_iterative_power(x, pot));
}*/
