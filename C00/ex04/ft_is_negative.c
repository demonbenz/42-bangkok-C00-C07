/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:56:53 by otangkab          #+#    #+#             */
/*   Updated: 2022/04/29 23:21:30 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n >= 0)
	{
		c = 80;
	}
	else
		c = 78;
	write(1, &c, 1);
}

/*
int	main(void)
{
	int	a;

	a = -5;
	ft_is_negative(a);
	a = 0;
	ft_is_negative(a);
	a = 5;
	ft_is_negative(a);
	return (0);
}
*/
