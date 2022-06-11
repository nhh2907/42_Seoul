/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:53:41 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/07 15:16:05 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ultra;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ultra = (int *)malloc(size * sizeof(int));
	if (ultra == NULL)
		return (-1);
	*range = ultra;
	i = 0;
	while (i < size)
	{
		ultra[i] = min + i;
		i++;
	}
	return (size);
}
