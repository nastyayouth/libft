/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:34:13 by eestell           #+#    #+#             */
/*   Updated: 2019/09/14 22:25:48 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		index;
	int		number;
	int		zn;

	number = 0;
	index = 0;
	zn = 1;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\r' ||
			str[index] == '\t' || str[index] == '\f')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '+')
			zn = 1;
		zn = (-1);
		index++;
	}
	if (str[index] == '+')
		index++;
	while (((str[index] <= '9') && (str[index] >= '0')))
		number = number * 10 + str[index++] - '0';
	number = number * (zn);
	return (number);
}
