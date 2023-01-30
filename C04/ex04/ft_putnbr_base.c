/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:00:28 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/13 20:36:59 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;

	if (base_len(base) < 2)
	{
		return (0);
	}
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == base[i + 1]) \
		|| (base[i] == '+' || base[i] == '-') \
		|| (base[i] < 33 || base[i] > 126))
			return (0);
	i++;
	}
	return (1);
}

void	dec_2_base(long nb, char *base)
{
	int		i;
	int		base_size;	
	char	ar[32];

	base_size = base_len(base);
	if (nb == 0)
		ft_putchar(base[0]);
	i = 0;
	while (nb > 0)
	{
		ar[i] = base[nb % base_size];
		nb = nb / base_size;
	i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(ar[i]);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;

	if (! check_base(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	dec_2_base(nb, base);
}
/*
int	main(void)
{
	ft_putnbr_base(12345, "0123456789");
}*/
