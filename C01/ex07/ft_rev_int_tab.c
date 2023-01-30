/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:37:34 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/05 15:54:27 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
	j--;
	i++;
	}
}
/*
int	main()
{
	int	ia[] = {1,2,3,4,6};
	int	num = 5;

	int i = 0;
	while(i < num)
	{
		printf("%d",ia[i]);
		i++;
	}

	printf("\n");
	ft_rev_int_tab( ia, num);
	
	i = 0;
	while(i < num)
	{
		printf("%d",ia[i]);
		i++;
	}
}
*/
