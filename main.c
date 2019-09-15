/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eestell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:08:35 by eestell           #+#    #+#             */
/*   Updated: 2019/09/15 14:32:29 by eestell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <xlocale.h>
//void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
//void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
//void	*ft_memchr(const void *s, int x, size_t n);
int		ft_strlen(const char *s);
//char	*ft_strcpy(char *dst, const char *src);
//char	*ft_strncpy(char *dst, const char *src, size_t len);
//char	*ft_strcat(char *restrict s1, const char *restrict s2);
//char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
//size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);
//char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
//char	*ft_strstr(const char *haystack, const char *needle);
//char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//int		ft_strcmp(const char *s1, const char *s2);
//int		ft_strncmp(const char *s1, const char *s2, size_t n);
//int		ft_atoi(const char *str);
//int		ft_isalpha(int c);
//int		ft_isdigit(int c);
//int		ft_isalpha(int c);
//int		ft_isascii(int c);
//int		ft_isprint(int c);
//int		ft_toupper(int c);
//int		ft_tolower(int c);
int main()
{
	char *dst;
	char src[15] = "01234567890";
//printf("%s ", ft_memcpy(dst,"tgg" ,5 ));
//printf("%s", memcpy(dst,"tgg" ,5 ));
//ft_memccpy(dst, src, '5' ,10);
//printf("%s", dst);
//memccpy(dst, src ,'5',10);
//printf("%s", dst);

//ft_memchr(src, '4', 10);
//printf("%s", src);
//printf("%lu", ft_strlcat(dst, src, 4));
printf("%lu", strlcat(dst, src, ft_strlen(src)));
//	printf("%s ", ft_strstr( "rwirrwww", "rw"));
//	printf("%s ", strstr( "rwirrwww", "rw"));
//	printf("%s ", ft_strnstr( "tttwe", "tttwe", 10));
//	printf("%s", strnstr("tttwe", "tttwe", 10));
//	printf("%d ", ft_strcmp("ff", "fff/0/"));
//	printf("%d \n", strcmp("ff", "fff/0/"));
//	printf("%d ", ft_strncmp("tes", "test1", (4)));
//	printf("%d ", strncmp("tes", "test1", (4)));
//	printf("%d ", ft_atoi("    2147483641111"));
//	printf("%d", atoi("   21474836491111"));
//	printf("%d", ft_isalpha('{'));
//	printf("%d\n", isalpha('{'));
//	printf("%d", ft_isalpha('2'));
//	printf("%d", isalpha('2'));
//	printf("%d", ft_isdigit('''));
//	printf("%d", isdigit('1'));
//	printf("%d", ft_isdigit('a'));
//	printf("%d", isdigit('a'));
//	printf("%d", ft_isalnum('9'));
//	printf("%d", isalnum('9'));
//	printf("%d", isalnum('{'));
//	printf("%d", ft_isalnum('{'));
//	printf("%d", ft_isascii(2442));
//	printf("%d", isascii(2442));
//	printf("%d", ft_isascii('\n'));
//	printf("%d", isascii('\n'));
//	printf("%d", ft_isprint('\n'));
//	printf("%d", isprint('\n'));
//	printf("%d", ft_isprint(' '));
//	printf("%d", isprint(' '));
//	printf("%d", ft_tolower('a'));
//	printf("%d ", tolower('a'));
//	printf("%d", ft_tolower('A'));
//	printf("%d ", tolower('A'));
//	printf("%d", ft_tolower('{'));
//	printf("%d", tolower('{'));
	return (0);
}

