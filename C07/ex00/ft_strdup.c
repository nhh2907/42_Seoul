/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:51:41 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/07 10:38:46 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*destination;
	int		len_src;
	int		i;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	destination = (char *)malloc(len_src * sizeof(char) + 1);
	if (destination == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
