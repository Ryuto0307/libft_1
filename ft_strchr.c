/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:06:02 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/26 17:37:04 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
