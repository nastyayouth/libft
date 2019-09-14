/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:52:06 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 16:50:00 by eestell          ###   ########.fr       */
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

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char	*s3;

	s3 = s1 + ft_strlen(s1);
	while (*s2 != '\0')
		*s3++ = *s2++;
	*s3 = '\0';
	return (s1);
}
