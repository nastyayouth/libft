/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:02:59 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 12:16:22 by eestell          ###   ########.fr       */
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

void *ft_memmove(void *dst, const void *src, size_t len)
{

	unsigned char *str1;
	unsigned char *str2;
	int		i;
	int		j;

	i = ft_strlen(str1);
	j = ft_strlen(str2);
	str1 = dst;
	str2 = src;
	if (ft_strlen(str2) < len)
		return(0);
	while (len > 0)
	{
		len--;
		str1[i] = str2[j];
		i++;
		j++;
	}
	return(dst);
}

int main()
{
	char str1[] = "retert";
	char str2[] = "455";
	int n = 7;

	printf("%s  ", ft_memmove(&str1[2], str2[3], 2));

	printf("%s", memmove(&str1[3], &str2[2], 2));
	return (0);
}
