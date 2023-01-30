/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 15:28:13 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/04 15:55:58 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	return ;
}
/*
int	main()
{	
	int	x;
	int	y;
	int	*px;
	int	*py;
	
	x = 450;
	y = 19;
	px = &x;
	py = &y;
	printf("x = %d : y = %d\n", x, y);
	ft_ultimate_div_mod(px, py);
	printf("x = %d : y = %d \n", x, y);

}
*/
