/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:38:56 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/06 18:50:09 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "AAAAAA";
	char str2[] = "aaaa aa";

	int c = ft_str_is_uppercase(str1);
	printf("str1 = %d\n",c);
	c = ft_str_is_uppercase(str2);
	printf("str2 = %d\n",c);
}
*/
