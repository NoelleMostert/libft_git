/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:42:55 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/24 12:48:06 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int sstr;
	int lstr;
	int length;

	length = ft_strlen(needle);
	sstr = 0;
	lstr = 0;
	while (haystack[lstr] != '\0')
	{
		while (haystack[sstr + lstr] == needle[sstr])
		{
			if (sstr == length - 1)
				return ((char *)needle);
			sstr++;
		}
		sstr = 0;
		lstr++;
	}
	return (0);
}
