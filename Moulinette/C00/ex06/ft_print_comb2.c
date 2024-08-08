/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:55:06 by sabdelha          #+#    #+#             */
/*   Updated: 2024/07/31 10:19:11 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	c;
	int	v;

	c = 0;
	while (c <= 98)
	{
		v = c + 1;
		while (v <= 99)
		{
			print (c / 10 + '0');
			print (c % 10 + '0');
			write (1, " ", 1);
			print (v / 10 + '0');
			print (v % 10 + '0');
			if (c != 98)
				write (1, ", ", 2);
			v++;
		}
		c++;
	}
}
/*
 * int main() {
ft_print_comb2();
    return 0;
}*/
