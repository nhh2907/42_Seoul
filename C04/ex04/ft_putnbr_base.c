/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:18:52 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/09 13:51:35 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		check_error(char *base);
void	recursive(long long int number, char *base, int radix);
int		base_length(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	number;
	int				radix;

	number = nbr;
	radix = base_length(base);
	if (radix == 0 || radix == 1)
		return ;
	if (check_error(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		number = number * -1;
	}
	recursive(number, base, radix);
}

int	base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	recursive(long long int number, char *base, int radix)
{
	long long int	quotient;
	char			remainder;

	quotient = number / radix;
	remainder = base[number % radix];
	if (quotient != 0)
		recursive(quotient, base, radix);
	write(1, &remainder, 1);
}

int	check_error(char *base)
{	
	char	rep[128];
	int		i;

	i = 0;
	while (i < 128)
	{
		rep[i++] = 0;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (rep[(int)(base[i])])
			return (0);
		else
			rep[(int)(base[i])] = 1;
		i++;
	}
	return (1);
}
