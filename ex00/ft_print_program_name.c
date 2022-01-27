/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:33:25 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/26 16:56:56 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

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

int	main(int argc, char **argv)
{
	(void) argv;
	ft_putstr(argv[0]);
	return (0);
}
