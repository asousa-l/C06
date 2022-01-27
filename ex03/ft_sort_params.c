/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:25:24 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/27 00:04:26 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	a;

	while (true)
	{
		a = *str;
		if (a == '\0')
		{
			break ;
		}
		ft_putchar(a);
		str++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	main(int argc, const char **argv)
{
	int	i;
	int	j;
	int	tab [argc];
	int	c;

	c = 1;
	i = 1;
	while (c < argc)
	{
		tab[c] = c;
		c++;
	}
	while (i < argc)
	{
		j = i;
		while (d < argc)
		{
			if (ft_strcmp(argv[tab[i]], argv[tab[j]]) > 0)
				ft_swap(&tab[i], &argv[j]);
			j++;
		}
		ft_putstr(argv[arg[i++]]);
	}
	return (0);
}
