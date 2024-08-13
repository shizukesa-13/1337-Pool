/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:14:32 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/11 15:43:39 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}
char *ft_strdup(char *src)
{
	int l;
	int i;
	char *t;
	
	l = len(src);
	i = 0;
	t = (char*) malloc(sizeof(char) * l + 1);
	if (t == 0)
		return (0);
	while ( i < l)
	{
		t[i] = src[i];
		i++;
	}
	t[i] = 0;
	return(t);
}
#include <stdio.h>
int main()
{
	char s[] = "5456499787954";
	printf("%s", ft_strdup(s));
}
