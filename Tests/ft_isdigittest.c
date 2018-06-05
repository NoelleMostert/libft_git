/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigittest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:50:53 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 10:05:58 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main () {
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) ) {
      printf("var1 = |%c| is a digit\n", var1 );
   } else {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( isdigit(var2) ) {
      printf("var2 = |%c| is a digit\n", var2 );
   } else {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
   
   if (ft_isdigit(var1) ) {
      printf("var1 = |%c| my function is a digit\n", var1 );
   } else {
      printf("var1 = |%c| my function is not a digit\n", var1 );
   }
   
   if(ft_isdigit(var2) ) {
      printf("var2 = |%c| my function is a digit\n", var2 );
   } else {
      printf("var2 = |%c| my function is not a digit\n", var2 );
   }
   return(0);
}
