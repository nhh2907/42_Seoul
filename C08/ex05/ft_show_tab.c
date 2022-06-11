/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:40:11 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/08 20:13:17 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	recursive_nbr(int nb);
void	print_str(char *s);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].str);
		write(1, "\n", 1);
		recursive_nbr(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

void	print_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &(s[i]), 1);
		i++;
	}
}

void	recursive_nbr(int nb)
{
	char	remainder;

	remainder = nb % 10 + '0';
	if (nb >= 10)
		recursive_nbr(nb / 10);
	write(1, &remainder, 1);
}
