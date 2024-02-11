/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:46:38 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/30 09:22:46 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	while (nb != (x * x))
	{
		if (nb < (x * x) || x > 46340)
		{
			return (0);
		}
		x++;
	}
	return (x);
}
/* #include <stdio.h>
int main(void)
{
	int	raizd;

	raizd = 64;
	printf("%d", ft_sqrt(raizd));
} */
