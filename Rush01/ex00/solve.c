/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 20:51:32 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/05/29 20:51:34 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_unique(int **room);
int	is_answer(int **room, int *view);

int	solve(int **room, int *view, int solved)
{
	int	ret;
	int	i;

	ret = 0;
	i = 1;
	if (solved == 16)
	{
		ret = is_answer(room, view);
		return (ret);
	}
	while (i <= 4)
	{
		room[solved / 4][solved % 4] = i;
		if (is_unique(room) == 1)
		{
			ret = solve(room, view, solved + 1);
			if (ret == 1)
				break ;
		}
		room[solved / 4][solved % 4] = 0;
		i++;
	}
	return (ret);
}
