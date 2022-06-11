/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_2222.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 21:03:17 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/09 10:46:36 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *base);
int	check_base(char *base);
int	check_str(char *str, char *base, int base_size);
int	perform_atoi(char *str, char *base, int base_size, int i);

int	ft_atoi_base(char *str, char *base)
{
	int	base_size;
	int	num;

	if (check_base(base) == 0)
		return (0);
	base_size = ft_length(base);
	num = check_str(str, base, base_size);
	return (num);
}

int	perform_atoi(char *str, char *base, int base_size, int i)
{
	int	base_index;
	int	str_index;
	int	value;

	value = 0;
	str_index = i;
	base_index = 0;
	while (str[str_index])
	{
		while (1)
		{
			if (base_size - 1 < base_index)
				return (value);
			if (str[str_index] == base[base_index])
			{
				value = value * base_size + base_index;
				base_index = 0;
				break ;
			}
			base_index++;
		}
		str_index++;
	}
	return (value);
}

int	check_str(char *str, char *base, int base_size)
{
	int	sign;
	int	i;
	int	num;

	sign = 1;
	num = 0;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	num = perform_atoi(str, base, base_size, i) * sign;
	return (num);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || \
				base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_length(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}
