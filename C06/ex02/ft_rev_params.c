/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:20:15 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/05 11:51:25 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		while (--argc)
		{
			while (*argv[argc])
			{
				write(1, argv[argc], 1);
				argv[argc]++;
			}
			write(1, "\n", 1);
		}	
	}	
	return (0);
}
