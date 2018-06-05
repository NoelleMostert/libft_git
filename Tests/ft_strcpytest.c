/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdeltest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:52:57 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 15:06:28 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   char src[40];
   char dest[100];
   char src1[40];
   char dest1[100];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "Copy	this funny @_looking string!");
   strcpy(dest, src);

   memset(dest1, '\0', sizeof(dest1));
   ft_strcpy(src1, "Copy	this funny @_looking string!");
   ft_strcpy(dest1, src1);

   printf("Final copied string : %s\n", dest);
   printf("Final copied string for my function : %s\n", dest1);
   
   return(0);
}
