/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:24:24 by eestell           #+#    #+#             */
/*   Updated: 2019/09/15 14:07:30 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

size_t	*ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t  len;
    size_t  slen;

    len = 0;
    slen = strlen(src);
    while (*dst && size > 0) 
    {
        dst++;
        len++;
        size--;
    }
    while (*src && size-- > 1) 
        *dst++ = *src++;
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (slen + len);
}
