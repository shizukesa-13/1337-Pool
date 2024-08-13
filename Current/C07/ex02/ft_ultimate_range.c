/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:23:46 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/13 17:42:08 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	l;

	i = 0;
	l = max - min;


	if (l <= 0)
	{
		*range = NULL;
		return(0);
	}
	*range = (int*) malloc (sizeof(int) * l);
	if(*range == NULL)
		return (-1);
	while (i < l)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (l);
}
#include <stdio.h>

int main(void)
{
	int *range = NULL;
    printf("%d", ft_ultimate_range(&range, 30, 90));
}
