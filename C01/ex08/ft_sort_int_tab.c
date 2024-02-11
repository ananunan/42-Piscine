/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 00:38:16 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/15 02:33:20 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	primeiro;
	int	proximo;
	int	troca;

	primeiro = 0;
	while (primeiro <= size - 1)
	{
		proximo = 0;
		while (proximo < size - 1)
		{
			if (tab[proximo] > tab[proximo + 1])
			{
				troca = tab[proximo];
				tab[proximo] = tab[proximo + 1];
				tab[proximo + 1] = troca;
			}
			proximo++;
		}
		primeiro++;
	}
}
/*#include <stdio.h>
int main ()
{
	int num[10] = {24, 1 ,32 ,4 ,5 ,7, 9 ,10 ,21, 0};

	int i = 0;
	while (i < 10)
	{
		printf("%d, ",num[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(num,10);
	while (i < 10)
	{
		printf("%d, ",num[i]);
		i++;
	}
}
*/
