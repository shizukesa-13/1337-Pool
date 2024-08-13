/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:08:25 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/06 14:30:31 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		res = nb * ft_recursive_power(nb, power -1);
	}
	return (res);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(3, 3));
}*/
