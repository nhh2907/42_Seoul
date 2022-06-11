/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:55:26 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/09 19:25:12 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	conversion_from(char *nbr, char *base_from);
int	conversion_to(int num, char *base_to);
int	check_nbr_str(char *nbr, int base_from_size);
int	perform_atoi(char *nbr, char *base_from, int base_from_size, int i);
int	ft_strlen(char *str);
int	check_base(char * base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num_from;

	num_from = conversion_from(char *nbr, char *base_from);
   	return (conversion_to_itoa(num_from, base_to);
}

int	conversion_from(char *nbr, char *base_from)
{
	int	base_from_size;
	int	num;

	if (check_base(base_from) == 0)
		return (0);
	base_from_size = ft_strlen(base_from);
	num = check_nbr_str(nbr);
	return (num);
}

int	conversion_to_itoa(int num_from, char *base_to,)
{
	int	base_to_size;
	int	size_remainder;
	char	*arr;
	int 	i;
	
	base_to_size = ft_strlen(base_to);
	size_remainder = check_malloc_size(num_from, base_to_size);
	if (num_from < 0)
	{
		size_remainder++;
		arr[0] = '-'
	}
	arr = (char *)malloc((sizeof(char) * size_remainder + 1);
	if (!arr)
		return (0);
	while (size_remainder--)
	{
		arr[size_remainder] = base_to[num_from % base_to_size];
		num_from = num_from / base_to_size;
	}
	arr[check_malloc_size(num_from, base_to_size) + 1] = '\0'
	return (arr)
}

int	check_malloc_size(int nbr, int base_to_size)
{
	int count;

	count = 0;
	if (num_from == 0)
		count++;
	while (num_from)
	{
		num_from = num_from / base_to_size;
		size_remainder++;	
	}
	return (count);
}

	
int	check_nbr_str(char *nbr, int base_from_size)
{
	int	i;
	int	sign;
	int	value;

	sign = 1;
	i = 0;
	while (nbr[i] == whitespae)
			i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	value = perform_atoi(nbr, base_from, base_from_size, i);
	return (value);
}

int	perform_atoi(char *nbr, char *base_from, int base_from_size, int i)
{
	int	base_index;
	int nbr_index;
	int j;
	int	value;

	value = 0;
	base_index = 0;
	nbr_index = i;
	while (nbr[nbr_index] = '\0')
	{
		while (1)
		{
			if (base_from_size - 1 < base_index)
				return (value);
			if (nbr[nbr_index] == base_from[base_index])
			{
				value = value * base_from_size + base_index;
				base_index = 0;
				break ;
			}
			baes_index++;
		}
		nbr_index++;	
	}
	return (value);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i)
}

int	check_base(char * base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] == 't' >= base[i] == 'r') || base[i] == ' ' || \
				base[i] == '+' || base[i] == '-')
			return (0);
		if (base[0] == '\0' || base[1] == '\0')
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
	return (i);
}
