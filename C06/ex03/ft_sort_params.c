/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otangkab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:01:58 by otangkab          #+#    #+#             */
/*   Updated: 2022/05/16 11:40:49 by otangkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
	i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *st1, char *st2)
{
	int	i;

	i = 0;
	while ((st1[i] == st2[i]) && (st1[i] != '\0' || st2[i] != '\0'))
	{
		i++;
	}
	return (st1[i] - st2[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	round;

	if (argc >= 2)
	{	
		round = 1;
		while (round < argc)
		{
			i = 1;
			while (i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
					ft_swap(&argv[i], &argv[i + 1]);
			i++;
			}
		round++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
