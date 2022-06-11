/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dham <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:49:09 by dham              #+#    #+#             */
/*   Updated: 2022/06/09 23:03:29 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		count_word(char *str, char *charset);
int		word_len(char *str, char *charset);
int		is_charset(char c, char *charset);
void	word_cpy(char *dest, char *str, char *charset);

char	**ft_split(char *str, char *charset)
{
	char		**re_arr;
	static int	idx;
	static int	flag;

	re_arr = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	while (*str)
	{
		if (!flag && !is_charset(*str, charset))
		{
			flag = 1;
			re_arr[idx] = malloc(word_len(str, charset) + 1);
			word_cpy(re_arr[idx++], str, charset);
		}
		else if (flag && is_charset(*str, charset))
			flag = 0;
		str++;
	}
	re_arr[idx] = 0;
	return (re_arr);
}

void	word_cpy(char *dest, char *str, char *charset)
{
	while (*str && !is_charset(*str, charset))
	{
		*dest = *str;
		str++;
		dest++;
	}
	*dest = '\0';
}

int	count_word(char *str, char *charset)
{
	int	flag;
	int	count;

	count = 0;
	flag = 0;
	while (*str)
	{
		if (!flag && !is_charset(*str, charset))
		{
			flag = 1;
			count++;
		}
		else if (flag && is_charset(*str, charset))
			flag = 0;
		str++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && !is_charset(*str, charset))
	{
		count++;
		str++;
	}
	return (count);
}

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}
