/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:01:44 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/06 11:45:47 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
/*#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(9));
}*/
