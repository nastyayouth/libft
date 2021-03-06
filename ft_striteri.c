/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:59:45 by eestell           #+#    #+#             */
/*   Updated: 2019/09/20 18:59:34 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s != '\0')
	{
		f(i, s);
		i++;
		s++;
	}
}
