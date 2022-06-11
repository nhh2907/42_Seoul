/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 11:28:34 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/24 23:11:23 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char H1, char H2, char H3, char H4);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + '0', a % 10 + '0', b / 10 + '0', b % 10 + '0');
			++b;
		}
	++a;
	}
	write(1, "98 99", 5);
	return ;
}

void	putchar(char H1, char H2, char T1, char T2)
{
	write(1, &H1, 1);
	write(1, &H2, 1);
	write(1, " ", 1);
	write(1, &T1, 1);
	write(1, &T2, 1);
	write(1, ", ", 2);
}
