/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:53:10 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/10 11:04:21 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
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
	char str1[] = "ab";
	int c = ft_str_is_printable(str1);
	printf("str1 return : %d", c);
}
*/
