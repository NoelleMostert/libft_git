<<<<<<< HEAD
#include <stdio.h>
#include <unistd.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:16:04 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/21 16:47:34 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> a33309f84ce09515b401fbcf13e6d18730ca01db
#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg_flag;
	int result;

	i = 0;
	neg_flag = 0;
	result = 0;
<<<<<<< HEAD

	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] != '\0')
=======
	while (str[i])
>>>>>>> a33309f84ce09515b401fbcf13e6d18730ca01db
	{
		result *= 10;
		if (str[i] == '-' && !(neg_flag))
			neg_flag = 1;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		i++;
	}
	if (neg_flag)
		return (result * -1);
	return (result);
}

int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
