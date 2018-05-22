/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:18:27 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/22 16:03:52 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && (unsigned char)s1[i] != '\0'
			&& (unsigned char)s2[i] != '\0')
		i++;
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else
		return (0);	
}

int main ()
{
   const char haystack[100] = "Point is that this thing is";
   const char needle[100] = "Not like this";
   int ret;

   ret = ft_strcmp(haystack, needle);

   printf("The substring is: %i\n", ret);

   return(0);
}
