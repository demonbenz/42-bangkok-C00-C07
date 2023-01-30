/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:06:35 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/16 10:13:19 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
	i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	num;
	int	ans;

	num = 2147483646;
	ans = ft_is_prime(num);
	if (ans)
		printf("%d is prime number: ok", num);
	else
		printf("%d is not prime!", num);
}*/
