/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:40:16 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/10 16:38:57 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	ft_put_hex(int i)
{
	int	f_digit;
	int	s_digit;

	f_digit = 0;
	s_digit = 0;
	ft_putchar('\\');
	if (i > 9)
	{
		f_digit = i / 16;
		s_digit = i % 16;
		if (s_digit > 9)
			s_digit += 39;
	}
	else
		s_digit = i;
	ft_putchar(f_digit + '0');
	ft_putchar(s_digit + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_put_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
	i++;
	}
}
/*
int	main(void)
{
	char	str1[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str1);
}*/
