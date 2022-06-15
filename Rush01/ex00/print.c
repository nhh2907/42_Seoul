/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:51:17 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/29 20:51:19 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_room(int **room)
{
	int	x;
	int	y;

	y = 0;
	if (room[0][0] == 0)
	{
		print_error();
		return ;
	}
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar('0' + room[y][x]);
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
