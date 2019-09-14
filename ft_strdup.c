/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:23:46 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 15:02:12 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i++] = '\0';
	return (s2);
}

int		main(void)
{
	char *a;
	char *b;

	a = ft_strdup("");
	b = strdup("");
	printf("%s \n", a);
	printf("%s", b);
	return (0);
}
