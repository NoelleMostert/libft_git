/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:14:06 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/24 12:14:35 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*points;
	size_t			integer;

	points = str;
	integer = 0;
	while (integer < n)
		points[integer++] = (unsigned char)c;
	return (str);
}
