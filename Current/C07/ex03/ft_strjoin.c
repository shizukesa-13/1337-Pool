/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:43:00 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/13 20:02:18 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int lentotal(int size, char **s0, char *sl)
{
	int	i;
	int ltotal;

	i = 0;
	ltotal = 0;
	while (i < size)
	{
		ltotal += ft_stlen(s0[i]);
		ltotal += ft_stlen(sl);
		i++;
	}
	ltotal -= ftlen(sl);
	return (ltotal);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	
