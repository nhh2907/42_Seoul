/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwee <jwee@students.42seoul.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:28:30 by jwee              #+#    #+#             */
/*   Updated: 2022/05/22 21:37:58 by taekyuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	paint(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		paint(x, y);
	}
}

void	paint(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row++ < y)
	{
		col = 0;
		while (col++ < x)
		{
			if (row == 1 && (col == 1 || col == x))
				ft_putchar('A');
			else if ((row == 1 || row == y) && (col > 1 && col < x))
				ft_putchar('B');
			else if ((row > 1 && row < y) && (col == 1 || col == x))
				ft_putchar('B');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else if (row == y && (col == 1 || col == x))
				ft_putchar('C');
		}
		ft_putchar('\n');
	}
}
