/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touppertest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:29:33 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/04 15:07:27 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main ()
{
   int i = 0;
   int j = 0;
   char str[] = "Tut+or-ials P	oint\n";

   while (str[i])
   {
	   putchar (toupper(str[i]));
	   i++;
   }
   while (str[j])
   {
	   putchar (ft_toupper(str[j]));
	   j++;
   }
   return(0);
}
