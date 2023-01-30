/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:12:14 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/11 22:24:11 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}	
	return (i);
}
/*
int	main(void)
{
	char	test[] = "abc";
	int	n;

	n = ft_strlen(test);
	printf("string len = %d",n);
}*/
