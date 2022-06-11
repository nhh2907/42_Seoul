/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:47:56 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/26 12:42:58 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (*(tab + size - 2 - j) > *(tab + size - 1 - j))
			{	
				temp = *(tab + size - 1 - j);
				*(tab + size - 1 - j) = *(tab + size - 2 - j);
				*(tab + size - 2 - j) = temp;
				j++;
			}
			else
				j++;
		}
		i++;
	}
}
