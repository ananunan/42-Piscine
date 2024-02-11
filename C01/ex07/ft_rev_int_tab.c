/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:56:48 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/15 00:36:52 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int tamanho)

{
	int	primeiro;
	int	ultimo;
	int	troca;

	primeiro = 0;
	ultimo = tamanho - 1;
	while (primeiro < ultimo)
	{
		troca = tab[primeiro];
		tab[primeiro] = tab[ultimo];
		tab[ultimo] = troca;
		primeiro++;
		ultimo--;
	}
}
