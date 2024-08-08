/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:35:51 by sabdelha          #+#    #+#             */
/*   Updated: 2024/08/05 21:49:52 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	in;

	in = 0;
	while ((s1[in] != '\0' || s2[in] != '\0') && in < n)
	{
		if (s1[in] != s2[in])
		{
			return (s1[in] - s2[in]);
		}
		in++;
	}
	return (0);
}
/*int main()
{
	char x[] = "hm";
	char y[] = "hm";
	printf("%d", ft_strncmp(x, y, 3));
}*/
