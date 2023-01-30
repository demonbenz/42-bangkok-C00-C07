/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:21:21 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/04 15:19:12 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}
/*
int main()
{
	int	aa;
	int	bb;
	int	*cc;
	int	*dd;

	aa = 125;
	bb = 7;
	cc = &aa;
	dd = &bb;

	printf("aa = %d\nbb = %d\ncc = %d\n dd = %d\n", aa, bb, *cc, *dd);
	ft_div_mod(aa, bb, cc, dd);
	printf("------------------------------------------\n");
	printf("aa = %d\nbb = %d\ncc = %d\n dd = %d\n", aa, bb, *cc, *dd);


}
*/
