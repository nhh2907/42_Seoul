/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:54:29 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/08 18:48:21 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	start_strcat(char *str, char **strs, char *sep, int size);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
int		check_malloc_len(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;

	if (size == 0)
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	total_len = check_malloc_len(size, strs, sep);
	str = (char *)malloc(total_len * sizeof(char) + 1);
	if (!str)
		return (0);
	str[0] = '\0';
	start_strcat(str, strs, sep, size);
	return (str);
}

void	start_strcat(char *str, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(str, *(strs + i));
		ft_strcat(str, sep);
		i++;
	}
	ft_strcat(str, *(strs + i));
}

int	check_malloc_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	if (size == 1)
	{
		total_len += ft_strlen(strs[i]);
		return (total_len);
	}
	while (i < size - 1)
	{
		total_len += ft_strlen(strs[i]);
		total_len += ft_strlen(sep);
		i++;
	}
	total_len += ft_strlen(strs[i]);
	return (total_len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
