/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmostert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:30:05 by nmostert          #+#    #+#             */
/*   Updated: 2018/05/24 12:37:50 by nmostert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0'
			&& (unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		i++;
	}
	if ((unsigned char)s1[i] > (unsigned char)s2[i])
		return (1);
	else if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else
		return (0);
}
