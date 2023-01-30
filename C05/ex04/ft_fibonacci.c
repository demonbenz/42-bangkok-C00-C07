/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:18:31 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/14 18:02:53 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	fibonacci(int index)
{
	int	i;
	int	n1;
	int	n2;
	int	next;

	i = 0;
	n1 = 0;
	n2 = 1;
	if (index < 0)
		return (-1);
	while (i < index)
	{
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		i++;
	}
	return (n1);
}

int	main(void)
{
	int	id;
	int	value;

	id = 40;
	value = ft_fibonacci(id);
	printf("index %d : value %d\n", id, value);
}*/
