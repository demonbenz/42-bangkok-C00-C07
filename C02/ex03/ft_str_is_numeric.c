/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:04:07 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/06 17:18:34 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char str1[20] = "0123456789";
	char str2[20] = "abcd";

	int c = ft_str_is_numeric(str1);
	printf("%d \n",c);
	c = ft_str_is_numeric(str2);
	printf("%d \n",c);
}
*/
