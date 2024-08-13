/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 10:29:11 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/06 11:00:03 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		res = 1;
		while (nb > 1)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(9));
}*/
