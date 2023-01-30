/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:09:38 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/11 18:44:20 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
//#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (j < nb))
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
	char	st1[20] = "12345";
	char	st2[20] = "ABCDEFGH";
	char	st3[20] = "12345";
	char	st4[20] = "ABCDEFGH";
	char	*re1;
	char	*re2;

	unsigned char	num;

	num = 4;
	re1 = strncat(st1, st2, num);
	re2 = ft_strncat(st3, st4, num);
	printf("st1: %s |st2: %s |re1: %s\n", st1, st2, re1);
	printf("st3: %s |st4: %s |re2: %s\n", st3, st4, re2);
}*/
