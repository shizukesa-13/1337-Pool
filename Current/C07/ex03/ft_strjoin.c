/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:43:00 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/14 12:01:13 by sabdelha         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		l;
	char	*s;

	i = 0;
	l = 0;
	while (i <= size)
	{
		l = l + ft_strlen(strs[i]);
		i++;
	}
	l = l + (ft_strlen(sep) * (size - 1)) + 1;
	s = (char *)malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(s, strs[i]);
		if (i < size - 1)
			ft_strcat(s, sep);
		i++;
	}
	s[l] = '\0';
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	char *res;
	char sep[] = "-";
	int size = 2;
	char *arr[] = {"Pyeong", "on"};
	res = ft_strjoin(size, arr, sep);
	printf("%s", res);
}*/
