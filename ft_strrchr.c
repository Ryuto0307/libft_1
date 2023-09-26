/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:13:32 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/26 17:29:49 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*__memrchr(const void *m, int c, size_t n)
{
	const unsigned char	*s;

	s = m;
	c = (unsigned char)c;
	while (n--)
	{
		if (s[n] == c)
			return ((void *)(s + n));
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	return (__memrchr(s, c, ft_strlen(s) + 1));
}
