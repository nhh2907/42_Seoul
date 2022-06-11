/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:59:38 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/04 19:57:24 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			remainder;
	long long int	lnum;

	lnum = nb;
	if (lnum < 0)
	{
		write(1, "-", 1);
		lnum = lnum * (-1);
	}
	remainder = lnum % 10 + '0';
	if (lnum >= 10)
		ft_putnbr(lnum / 10);
	write(1, &remainder, 1);
}
