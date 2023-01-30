/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:12:24 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/10 17:51:30 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (((str[i - 1] < 'A') \
			|| (str[i - 1] > 'Z' && str[i - 1] < 'a') \
			|| (str[i - 1] > 'z')) \
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	i++;
	}	
	return (str);
}
/*
int	main()
{
	char	str1[] = "salut comment tu vas ? 42mots qurante-deux; cinquante+et+un";
	char	*str2 = "";

	printf("str1 before f:  %s\n",str1);
	printf("str2 before f:  %s\n", str2);
	printf("\n");
	str2     = ft_strcapitalize(str1);
	printf("str1 after f:  %s\n",str1);
	printf("str2 after f:  %s\n", str2);
	str1[0] = 't';
	str2[5] = 'f';
	printf("\n");	printf("str1 change:  %s\n",str1);
	printf("str2 change:  %s\n",str2);
}*/
