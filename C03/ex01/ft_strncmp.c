/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:48:29 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/10 18:21:48 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	comp;
	int	comp2;
	unsigned int	num;

	num = 2;
	char str1[] = "Banana";
	char str2[] = "BaNa";
	comp = ft_strncmp(str1, str2, num);
	comp2 = strncmp(str1, str2, num);
	printf("%d\n",comp);
	printf("%d\n",comp2);
}*/
