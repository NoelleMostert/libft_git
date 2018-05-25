/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:41:56 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/25 11:37:20 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	if (!dest || !src)
		return ((char *)NULL);
	bzero(dest, strlen(src));
	while (src[i] && i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}*/

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (i <= len)
		if (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		else
			while (i < len)
			{
				dest[i++] = '\0';
			}
	return (dest);
}
