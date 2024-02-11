/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:45:35 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/28 19:23:35 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
/*#include <stdio.h>
int main(void)
{
	int	a;

	a = 3;
	printf("%d", ft_iterative_factorial(a));
}*/
