/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:23:38 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/02 19:37:08 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	recur_putnbr(int nb)
{
	if (nb == 0)
	{
		return ;
	}
	else if (nb < 0)
	{		
		ft_putchar('-');
		nb = (nb * -1);
		recur_putnbr(nb);
	}
	else
	{
		recur_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
	{
		recur_putnbr(nb);
	}
}

/*
int	main()
{
	ft_putnbr(0);
	ft_putnbr(-53400042);
	ft_putnbr(1000549);
}
*/
