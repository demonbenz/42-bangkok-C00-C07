/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:48:55 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/14 16:14:57 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power != 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	else
		return (1);
}
/*
int	main(void)
{
	int	n;
	int	pow;
	int	ans;

	n = 2;
	pow = 7;
	ans = ft_recursive_power(n, pow);
	printf("number %d : pow %d : ans %d :", n, pow, ans);
}*/
