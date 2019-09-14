/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:58:55 by eestell           #+#    #+#             */
/*   Updated: 2019/09/14 20:37:38 by eestell          ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;

	k = ft_strlen(needle);
	j = 0;
	i = 0;
	len--;
	printf("%d %zu", ft_strlen(needle), len);
	if (ft_strlen(needle) != len)
		return (0);
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		i = 0;
		while (needle[i++] == haystack[j++])
		{
			if (i == k)
				return (&haystack[j - i]);
		}
		j++;
	}
	return (0);
}
