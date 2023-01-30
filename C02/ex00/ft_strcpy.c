/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:27:59 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/06 13:16:36 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0' )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{	
	char	src_word[100] ="Hello 42 @ Bangkok!";	
	char	ar[500] = "";
	
	char *str = ft_strcpy(ar, src_word);
	printf("2)value ar = %s\n", ar);
	printf("3value str = %s\n", str);
	printf("4)address ar = %p\n", &ar);
	printf("5)address str = %p\n", &str);
}
*/
