/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:33:08 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 15:47:47 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	if (ft_strlen(src) < len)
		return (src);
	i = 0;
	dst = (char*)malloc(sizeof(char) * (len + 1));
	if (ft_strlen(dst) == 0)
	{
		free(dst);
		dst = (char*)malloc(sizeof(char) * (len + 1));
	}
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
