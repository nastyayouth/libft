/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:22:51 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 12:02:41 by eestell          ###   ########.fr       */
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

	//str2 = (unsigned char*)malloc(sizeof(unsigned char) * ft_strlen(str1));
	if (ft_strlen(str1) < n)
		return(0);
	while (n > 0)
	{
		n--;
		printf("%c \n", str1[n]);
		if (str1[n] == (char)c)
		return (str2);
		str2[n] = str1[n];
	}
	return(str2);
}

int main()
{
	char str1[] = "123456789";
	char str2[] = "";
	int i;

	i = 0;

	//memccpy(str2, str1, '5', 4);
	printf("%s", ft_memccpy(str2, str1,'5', 12));
	//printf("%  ", ft_memccpy(str2, str1,'5', 12));
	printf("%c", '\n');
	return (0);
}
