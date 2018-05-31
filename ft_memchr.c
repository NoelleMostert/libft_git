/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:23:13 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/30 17:01:04 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	if (!str)
		return (NULL);
	sc = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void *)sc + i);
		i++;
	}
	return (NULL);
}
