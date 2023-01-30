/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:30:12 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/01 12:12:12 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a, char b, char c)
{
	if (a < b && b < c)
	{	
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a == '7' && b == '8' && c == '9')
		{	
			return ;
		}
		write(1, ",", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '9')
	{
		while (b <= '9')
		{		
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				c++;
			}
		c = '0';
		b++;
		}
	b = '0';
	a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
