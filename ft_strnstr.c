/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:55:26 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/30 16:24:16 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int sstr;
	int lstr;
	int length;

	length = ft_strlen(needle);
	sstr = 0;
	lstr = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[lstr] != '\0' && len--)
	{
		while (haystack[sstr + lstr] == needle[sstr])
		{
			if (sstr == length - 1)
				return ((char *)haystack + lstr);
			sstr++;
		}
		sstr = 0;
		lstr++;
	}
	return (0);
}
