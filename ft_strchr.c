/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:06:02 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/06 18:57:29 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (const char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
