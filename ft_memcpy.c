/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:56:06 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 11:53:35 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(unsigned char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{

	unsigned char *str1;
	unsigned char *str2;

	str1 = dst;
	str2 = src;
	if (ft_strlen(str2) < n)
		return(0);
	while (n > 0)
	{
		n--;
		str1[n] = str2[n];
	}
	return(dst);
}

int main()
{
	char str1[] = "retert";
	char str2[] = "455";
	int n = 7;

	printf("%s  ", ft_memcpy(str1, str2, 2));

	printf("%s", memcpy(str1, str2, 2));
	return (0);
}
