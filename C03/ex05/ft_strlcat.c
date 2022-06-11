/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunnoh <hyunnoh@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:49:16 by hyunnoh           #+#    #+#             */
/*   Updated: 2022/06/01 22:14:07 by hyunnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	len_src = 0;
	while (*dest != '\0')
	{
		dest++;
		len_dest++;
	}
	while (src[len_src] != '\0' && len_dest + len_src + 1 < size)
	{
		*dest++ = src[len_src];
		len_src ++;
	}
	while (src[len_src] != '\0')
		len_src ++;
	*dest = '\0';
	if (size == 0)
		return (size + len_src);
	if (size < len_dest)
		return (size + len_src);
	return (len_dest + len_src);
}		
