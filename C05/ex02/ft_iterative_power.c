/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:05:02 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/16 10:05:30 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	t_nb;

	t_nb = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	i = 1;
	while (i < power)
	{
		t_nb = t_nb * nb;
	i++;
	}
	return (t_nb);
}
/*
int	main(void)
{
	int	n;
	int	p;
	int	ans;

	n = -100;
	p = -3;
	ans = ft_iterative_power(n, p);
	printf("num %d: pow %d: ans = %d :\n", n, p, ans);
}*/
