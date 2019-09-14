/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:55:40 by eestell           #+#    #+#             */
/*   Updated: 2019/09/14 21:08:56 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;

	k = ft_strlen(needle);
	j = 0;
	i = 0;
//	if (ft_strlen(needle) == 0)
//		return (haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (needle[i++] == haystack[j++])
		{
			printf("%d %c   ", j, haystack[j]);
			printf("%d %c \n  ", i, needle[i]);
			if (i == k)
				return (&haystack[j - i]);
		}
		j++;
	}
	return (0);
}
