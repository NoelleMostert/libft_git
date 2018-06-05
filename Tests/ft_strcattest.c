/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcattest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:52:15 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 11:57:54 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   char src[50], dest[50];
   char src1[50], dest1[50];

   strcpy(src, "This is source");
   strcpy(dest, "This is destination");

   strcpy(src1, "This is source");
   strcpy(dest1, "This is destination");

   strcat(dest, src);
   ft_strcat(dest1, src1);

   printf("Final destination string : |%s|\n", dest); 
   printf("Final destination of my string cat : |%s|", dest1);
   
   return(0);
}
