/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:28:08 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/06 17:02:08 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') \
			|| (str[i] >= 'a' && str[i] <= 'z'))
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
	char str1[20] = "abcd fgh";
	char str2[20] = "1aas";
	char str3[20] = "A%^&&Z";
	char str4[20] = "abcz";
	char str5[20] = "12345a";

	int c = ft_str_is_alpha(str1);
	printf("str1 return = %d\n",c);
	c = ft_str_is_alpha(str2);
	printf("str2 return  = %d\n",c);
	c = ft_str_is_alpha(str3);
	printf("str3 return = %d\n",c);
	c = ft_str_is_alpha(str4);
	printf("str4 return = %d\n",c);
	c = ft_str_is_alpha(str5);
	printf("str5 return = %d\n",c);

}
*/
