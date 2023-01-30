/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 18:34:43 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/11 18:22:35 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	st1[20] = "ABCD";
	char	st2[20] = "1234";
	char	st3[20] = "ABCD";
	char	st4[20] = "1234";
	char	*re1;
	char	*re2;
	
	re1 = strcat(st1, st2);
	re2 = ft_strcat(st3, st4);

	printf("st1 = %s : st2 = %s : re1 = %s\n", st1, st2, re1);
	printf("st3 = %s : st4 = %s : re2 = %s\n", st3, st4, re2);
}*/
