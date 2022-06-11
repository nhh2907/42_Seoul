/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:16:03 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/25 11:13:45 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char e, char f, char g);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
	return ;
}

void	ft_putchar(char e, char f, char g)
{
	if (e != '7')
	{
		write(1, &e, 1);
		write(1, &f, 1);
		write(1, &g, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, "789", 3);
	}
	return ;
}
