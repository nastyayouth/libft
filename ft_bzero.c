/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:52:11 by eestell           #+#    #+#             */
/*   Updated: 2019/09/12 19:30:15 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *t;
	t = b;
	while (len > 0)
	{
	len--;
	t[len] = (unsigned char)c;
	}
	return (t);
}
void	*ft_bzero(void *s, size_t n)
{
	unsigned char  *str;
	char c;
	str = s;
	printf("%s ", ft_memset(str, '\0', n));
	printf("%c ", str[0]);
}

int main()
{
	char str[5] = "";
	size_t a = 2;
	ft_bzero(str, 1);
	return(0);
}

