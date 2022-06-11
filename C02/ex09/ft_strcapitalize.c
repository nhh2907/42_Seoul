/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:50:29 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/01 21:32:15 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		check(char *ptr, int j);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}	
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((check(str, i) == 2) && check(str, i + 1) == 1)
			str[i + 1] = str[i + 1] - 'a' + 'A';
		i++;
	}
	if (check(str, 0) == 1)
		str[0] = str[0] - 'a' + 'A';
	return (str);
}

int	check(char *ptr, int j)
{
	if (ptr[j] >= 'a' && ptr[j] <= 'z')
		return (1);
	else if (ptr[j] >= 'A' && ptr[j] <= 'Z')
		return (0);
	else if (ptr[j] >= '0' && ptr[j] <= '9')
		return (0);
	else
		return (2);
}
