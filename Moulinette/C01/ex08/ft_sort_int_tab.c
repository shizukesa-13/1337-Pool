/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:43:22 by sabdelha          #+#    #+#             */
/*   Updated: 2024/07/30 09:05:57 by sabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

/*
 * int main()
{
    int b[] = {4,6,8,7,5,9};
    int i;
	ft_sort_int_tab(b, 6);
	for (i = 0; i < 6; i++){
	    printf("tab[%d] = %d\n", i, b[i]);
	    
	}
         return 0;
}		 for (unsigned i = 0; i < 6; i++)
       		 printf("tab[%u] = %d\n", i, tab[i]);

	}
*/
