/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:14:51 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/02 18:13:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	f_digit;
	int	s_digit;

	f_digit = 0;
	s_digit = 0;
	while (f_digit < 99)
	{
		s_digit = f_digit + 1;
		while (s_digit <= 99)
		{
			ft_putchar(f_digit / 10 + 48);
			ft_putchar(f_digit % 10 + 48);
			ft_putchar(' ');
			ft_putchar(s_digit / 10 + 48);
			ft_putchar(s_digit % 10 + 48);
			if ((f_digit == 98) && (s_digit == 99))
			{
				return ;
			}
			ft_putchar(',');
			s_digit++;
		}
		f_digit++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/
