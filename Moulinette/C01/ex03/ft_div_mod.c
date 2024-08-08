/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 20:34:00 by sabdelha          #+#    #+#             */
/*   Updated: 2024/07/30 11:18:56 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
 * int main()
{
    int w = 5;
    int x = 7;
    int y = 8;
    int z = 2;
    ft_div_mod(w, x, &y, &z);
    printf("%d%d%d%d", w, x, y, z);
    return(0);
}
*/
