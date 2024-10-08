/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:53:05 by sabdelha          #+#    #+#             */
/*   Updated: 2024/07/31 10:17:30 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				write (1, &num1, 1);
				write (1, &num2, 1);
				write (1, &num3, 1);
				if (num1 != '7')
					write (1, ", ", 2);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
/*
 * int main() {
ft_print_comb();
    return 0;
}
*/
