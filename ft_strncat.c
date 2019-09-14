/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:51:53 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 17:07:54 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int a;
	char	*s3;

	a = 0;
	s3 = s1 + ft_strlen(s1);
	while (a++ < n)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s1);
}
