/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:06:01 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/13 17:47:11 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strnlen(const char *s, size_t maxlen)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (i <= maxlen)
		return (i);
	else
		return (maxlen);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	l;

	if (size == 0)
		return (ft_strlen(src));
	l = strnlen(dest, size);
	if (l == size)
		return (l + ft_strlen(src));
	return (l + ft_strlcpy(dest + l, src, size - l));
}
