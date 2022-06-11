/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:15:22 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/06 10:11:57 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	while (*argv[0])
	{
		write(1, *argv, 1);
		argv[0]++;
	}
	write(1, "\n", 1);
	return (0);
}
