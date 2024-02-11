/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeberius <aeberius@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:21:35 by aeberius          #+#    #+#             */
/*   Updated: 2024/01/23 18:34:45 by aeberius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = signal * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signal);
}
/* #include <stdio.h>

int main()
{
	char *max_int = "2147483647";
	char *min_int = "-2147483648";
	char *zero = "0";
	char *minus = "-42";
	char *posit = "42";
	char *project_test = "      ---+-+-+---+-+4235abcd3123";
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",ft_atoi(max_int),
	ft_atoi(min_int),ft_atoi(zero),ft_atoi(minus),
	ft_atoi(posit),ft_atoi(project_test));
} */
