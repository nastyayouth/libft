/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:58:55 by eestell           #+#    #+#             */
/*   Updated: 2019/09/15 13:39:18 by eestell          ###   ########.fr       */
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

	j = 0;
	i = 0;
	if (ft_strlen(needle) > (len))
		return (0);
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (len-- > 1)
	{
		while (haystack[j] != '\0')
		{
			i = 0;
			while (needle[i++] == haystack[j++])
			{
				if (i == ft_strlen(needle))
					return (&haystack[j - i]);
			}
			if (i == 0)
				j++;
		}
	}
	return (0);
}
