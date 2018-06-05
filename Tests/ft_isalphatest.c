/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphatest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:45:49 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 08:56:23 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main () {
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }
   
   if( isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }
   
   if( isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }
   
   if( isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
    if(ft_isalpha(var1) ) {
      printf("var1 = |%c| my function is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| my function is not an alphabet\n", var1 );
   }
   
   if(ft_isalpha(var2) ) {
      printf("var2 = |%c| my function is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| my function is not an alphabet\n", var2 );
   }
   
   if(ft_isalpha(var3) ) {
      printf("var3 = |%c| my function is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| my function is not an alphabet\n", var3 );
   }
   
   if(ft_isalpha(var4) ) {
      printf("var4 = |%c| my function is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| my function is not an alphabet\n", var4 );
   }
   return (0);
}
