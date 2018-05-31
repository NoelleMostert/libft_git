/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:55:26 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/31 15:47:30 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t str;
	size_t strx;

	str = 0;
	if (!needle[str])
		return((char *)haystack);
	while (haystack[str] && str < len)
	{
		strx = 0;
		while (haystack[str + strx] == needle[str])
		{
			if (needle[str + 1] == '\0')
				return((char *)haystack);
			str++;
		}
		haystack++;
	}
	return (NULL);
}
