/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:53:20 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/05 20:56:50 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			while (*argv[i] != '\0')
			{
				write(1, argv[i], 1);
				argv[i]++;
			}	
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
