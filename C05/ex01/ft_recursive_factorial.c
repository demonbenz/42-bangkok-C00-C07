/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 15:00:54 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/14 14:03:43 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb = nb * (ft_recursive_factorial(nb - 1)));
}
/*
int	main(void)
{
	int	num;
	int	ret;

	num = 5;
	ret = ft_recursive_factorial(num);
	printf("%d\n", ret);
}*/
