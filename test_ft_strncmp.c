/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:30:05 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/22 15:43:08 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0'
			&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
        i++;
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else
		return (0);
}

int main()
{
        const char s1[] = "Point";
        const char s2[] = "Point";
        int length;
        int ret;
        int retnorm;
        
        length = 4;
        
        ret = ft_strncmp(haystack, needle, length);
        retnorm = strncmp(haystack, needle, length);
        
        printf("The substring is: %i\n", ret);
        printf("The substring is: %i\n", retnorm);
   
   return(0);
}