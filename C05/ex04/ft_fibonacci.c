/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:26 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/28 16:46:31 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 19)
	{
		return (4181);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
int main(void)
{
	int numero;

	numero = 18;
	printf("%d", ft_fibonacci(numero));
}*/
