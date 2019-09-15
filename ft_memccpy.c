/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:22:51 by eestell           #+#    #+#             */
/*   Updated: 2019/09/15 12:41:43 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(unsigned char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;

	str1 = src;
	str2 = dst;

	while (n > 0)
	{
		n--;
		if (str1[n] == (unsigned char)c)
			return (dst);
		str2[n] = str1[n];
	}
	return(dst);
}
