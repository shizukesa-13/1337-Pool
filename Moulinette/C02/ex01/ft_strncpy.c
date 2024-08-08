/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:39:18 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/03 18:09:34 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	in;

	in = 0;
	while (src[in] != '\0' && in < n)
	{
		dest[in] = src[in];
		in++;
	}
	while (in < n)
	{
		dest[in] = '\0';
		in++;
	}
	return (dest);
}
/*
 int main()
 {
 char i[50];
 char j[] = "Pyeongon";
 
 printf("%s", ft_strncpy(i, j, 20));
 return (0);
 }*/
