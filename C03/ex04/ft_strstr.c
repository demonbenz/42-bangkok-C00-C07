/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 19:34:45 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/11 19:51:13 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		a = i;
		b = 0;
		while (str[a] == to_find[b])
		{	
			if ((to_find[b + 1] == '\0') && (str[a] == to_find[b]))
			{
				return (&str[i]);
			}
		a++;
		b++;
		}
	i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	st1[] = "123abxy4567abc";
	char	st2[] = "abc";
	char	st3[] = "xyz";
	char	*p;
	char	*fail;

	p = ft_strstr(st1, st2);
	printf("st1: %s st2: %s p: %s\n", st1, st2, p);
	fail = ft_strstr(st1, st3);
	printf("st1: %s st3: %s p: %s\n", st1, st3, fail);
}*/
