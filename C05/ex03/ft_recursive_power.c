/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:09 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/28 20:05:57 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main(void)
{
	int	x;
	int	pot;

	x = 3;
	pot = 3;
	printf("%d", ft_recursive_power(x, pot));
}*/
