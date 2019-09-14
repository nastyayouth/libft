/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 16:13:22 by eestell           #+#    #+#             */
/*   Updated: 2019/09/13 11:54:32 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *t;

	t = b;
	while (len--)
	{
		t[len] = (unsigned char)c; 
	}
	return (t);
}

int main()
{
	char str[7] = "ewgggw";

	printf("%s", ft_memset(str, 'i', 2));
	printf("%s", memset(str, 'i', 2));
	return(0);
}
