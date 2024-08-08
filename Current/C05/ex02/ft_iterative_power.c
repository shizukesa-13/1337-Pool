/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:46:45 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/06 14:07:38 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		while (power > 1)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_power(3, 3));
}*/
