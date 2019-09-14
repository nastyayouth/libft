/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:24:24 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 18:49:49 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	*ft_strlcat(char *restrict dst, const char *restrict src, size_t size)

char	*s3;


	s3 = s1 + ft_strlen(s1);
	while (*s2 != '\0')
		*s3++ = *s2++;
	*s3 = '\0';
	return (s1);
}
