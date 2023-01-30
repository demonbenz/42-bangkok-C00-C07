/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:46:42 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/13 14:59:35 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	if (nb < 0)
	{
		return (0);
	}	
	i = 1;
	fac = 1;
	while (i <= nb)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}
/*
int	main(void)
{
	int	f;
	int	re;

	f = 15;
	re = ft_iterative_factorial(f);
	printf("%d\n", re);
}*/
