/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:20:53 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/12 12:50:13 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	num_i;
	unsigned int	num_j;

	i = 0;
	num_i = 0;
	while (dest[i] != '\0')
	{
		if (num_i < size)
			num_i++;
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (i + 1 < size))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	num_j = 0;
	while (src[num_j] != '\0')
		num_j++;
	return (num_i + num_j);
}

int	main(void)
{
	char	str_sr1[50] = "-7890";
	char	str_ds1[50] = "12345";
	char	str_sr2[50] = "-7890";
	char	str_ds2[50] = "12345";

	unsigned int	size;
	unsigned int	ret1;
	unsigned int	ret2;

	size = 0;
	ret1 = strlcat(str_ds1, str_sr1, size);
	ret2 = ft_strlcat(str_ds2, str_sr2, size);
	printf("str_sr1 = %s | str_ds1 = %s | ret1 = %u\n",str_sr1, str_ds1, ret1);
	printf("str_sr2 = %s | str_ds2 = %s | ret2 = %u\n",str_sr2, str_ds2, ret2);
}
