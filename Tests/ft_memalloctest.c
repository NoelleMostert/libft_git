/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloctest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:47:21 by nmostert          #+#    #+#             */
/*   Updated: 2018/06/05 11:01:23 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	size_t *ptr;
	size_t *ptr1;
	int 	i = 0;
	
	while (i < 10)
	{
	  printf("i is %zu\n", ptr[i]);
	  i++;
	}
	
	i = 0;
	ptr1 = (size_t*)ft_memalloc(sizeof(size_t) * 10);
	while (i < 10)
	{
		printf("i is %zu\n", ptr1[i]);
		i++;
	}
	return (0);
}
