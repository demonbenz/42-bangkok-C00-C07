/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:21:15 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/06 17:51:56 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char str1[20] = "Ant";
	char str2[20] = "ddd";
	char str3[20] = "";

	int c = ft_str_is_lowercase(str1);
	printf("str1 = %d \n",c);
	c = ft_str_is_lowercase(str2);
	printf("str2 = %d \n",c);
	c = ft_str_is_lowercase(str3);
	printf("str3 = %d \n",c);

}
*/
