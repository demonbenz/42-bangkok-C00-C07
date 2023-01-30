/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:15:55 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/13 16:00:14 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}


int	main(void)
{
	unsigned int	u;

	char str1[] ="123ABCdef";
	char str2[10] ="sdsdf" ;
	unsigned int s1 = 3;
	printf("str1 = %s\n", str1);
	u = ft_strlcpy(str2, str1, s1);
	printf("str2 = %s\n", str2);
	printf("return = %u\n", u);
}
