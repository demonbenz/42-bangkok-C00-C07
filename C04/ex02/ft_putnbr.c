/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:39:20 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/12 11:58:43 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recurint(int n)
{
	if (n == 0)
		return ;
	else
	{
		ft_recurint(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_recurint(nb);
	}
	else
		ft_recurint(nb);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-123456780);
	ft_putchar('\n');
	ft_putnbr(1000);
}*/
