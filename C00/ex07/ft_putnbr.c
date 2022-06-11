/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:18:47 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/25 10:35:15 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{	
	int	remainder;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb > -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 2147483647)
	{
		remainder = nb % 10 + '0';
		nb = nb / 10;
		if (nb != 0)
			ft_putnbr(nb);
		write(1, &remainder, 1);
	}
}
