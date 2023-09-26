/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:21:55 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/26 17:39:42 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(unsigned char *)s != (unsigned char)c && n > 0)
	{
		s++;
		n--;
	}
	if (n > 0)
	{
		return ((void *) s);
	}
	else
	{
		return (NULL);
	}
}
