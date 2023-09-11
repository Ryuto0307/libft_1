/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:21:55 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/05 18:46:53 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while(*(unsigned char *)s != (unsigned char)c && n > 0)
	{
		s++;
		n--;
	}
	if(n > 0)
	{
		return((void *)s);
	}
	else
	{
		return (NULL);
	}
}
