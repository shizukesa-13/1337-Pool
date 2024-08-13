/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:44:43 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/12 14:09:49 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	l;
	int *str=NULL;
	
	i = 0;
	l = max - min;
	if (l <= 0)
		return (NULL);
	str = (int*) malloc (sizeof(int) * l);
	if(!str)
		return (NULL);
	while (i < l)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	int	i;
	i = 0;
	int min = 5;
	int max = 28;
	int *tab = ft_range(5, 28);
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
