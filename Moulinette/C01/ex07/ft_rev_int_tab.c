/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:22:59 by sabdelha          #+#    #+#             */
/*   Updated: 2024/07/30 08:51:07 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	l;
	int	swap;

	i = 0;
	l = size - 1;
	while (i < l)
	{
		swap = tab[i];
		tab[i] = tab[l];
		tab[l] = swap;
		i++;
		l--;
	}
}
/*
 * int main()
{
	int	t[] = {1, 5, 8, 9, 8};
	int	p = 5;
	ft_rev_int_tab(t, p);
	int in = 0;
	while (in < p)
	{
		printf("%d", t);
		in++;
	}
}
*/
