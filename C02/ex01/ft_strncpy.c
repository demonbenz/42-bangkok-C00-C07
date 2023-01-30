/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:32:59 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/17 18:02:18 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char	src_word[5] ="";
	char	ar[25] = "";

	unsigned int num = 9; 
	char *str = ft_strncpy(ar, src_word, num);
	printf("1) input %s , number %d\n", src_word, num);
	printf("2) output %s\n", ar);
	printf("3) output %s\n", str);
}

