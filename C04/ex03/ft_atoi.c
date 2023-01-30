/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:00:44 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/12 21:49:21 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	p_or_m(int s)
{
	if (s % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_turn_num(char c)
{
	int	n;

	n = 0;
	n = c - '0';
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n_sign;
	int	t_num;
	int	p_m;

	i = 0;
	n_sign = 0;
	t_num = 0;
	while (str[i] && ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' ')))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{	
		if (str[i] == '-')
			n_sign++;
	i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		t_num = t_num * 10 + ft_turn_num(str[i]);
	i++;
	}
	p_m = p_or_m(n_sign);
	t_num = t_num * p_m;
	return (t_num);
}
/*
int	main(void)
{
	char	test1[] = "   ---+--+1234ab567";
	//char	test2[] = " - +0124-  +--2345";
	//char	test3[] = "1234---++0011ab";
	//char	test4[] = "-00012356056-++abcd00";
	//char	test5[] = "-----5006  ab566  ";
	//char	test6[] = "---\n \t \v \f \r --010 ";
	//char	test7[20] = "";
	//char	test8[20] = "--+---++01 -";
	int	ret;

	ret = ft_atoi(test1);	
	printf ("%d\n", ret);
}*/
