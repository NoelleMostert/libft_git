/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:59:18 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/30 11:28:59 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			i;
	const size_t	j = ft_strlen(s1);

	i = 0;
	while (i < n && s2[i])
	{
		s1[i + j] = (char)s2;
		i++;
	}
	s1[i + j] = 0;
	return (s1);
}
