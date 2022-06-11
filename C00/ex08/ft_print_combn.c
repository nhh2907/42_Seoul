/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:50:16 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/25 10:53:10 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	recursive(int n, char arr[], int cir_v, int num_v);

void	ft_print_combn(int n)
{
	char	arr[10];

	recursive(n, arr, 0, 0);    
}

void	recursive(int n, char arr[], int cir_v, int num_v)
{
	if (cir_v == n)
	{
		write(1, arr, n);
		if (arr[0] == 10 - n + '0')
			return ;
		write(1, ", ", 2);
		return ;
	}
	while (num_v <= 10 - n + cir_v)
	{
		arr[cir_v] = num_v + '0';
		recursive(n, arr, cir_v + 1, num_v + 1);
		num_v++;
	}
}
