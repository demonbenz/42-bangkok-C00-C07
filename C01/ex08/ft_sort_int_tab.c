/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:57:37 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/05 16:44:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int	ia[] = {1,3,9,5,2,7,4,0,4,4,1,5,0,9,-3,-9,-6,7,1};
	int	num = sizeof(ia)/sizeof(ia[0]);
	
	int i = 0;
	while(i < num)
	{	
		printf(" %d ", ia[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(ia, num);

	i = 0;
	while(i < num)
	{	
		printf(" %d ", ia[i]);
		i++;
	}
}
*/
