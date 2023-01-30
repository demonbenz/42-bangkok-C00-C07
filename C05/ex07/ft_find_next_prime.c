/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:40:42 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/16 17:38:42 by otangkab         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	if (nb > 3)
	{
		while (1)
		{
			if (ft_is_prime(nb))
				return (nb);
			nb++;
		}	
	}
	return (0);
}
/*
int	main(void)
{
	int	num;
	int	np;

	num = 2034435;
	np = ft_find_next_prime(num);
	printf("next prime of %d is %d\n", num, np);
}*/
