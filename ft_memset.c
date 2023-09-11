/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:35:11 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/06/22 02:59:23 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void *buf, int ch, size_t n)
{
	char *p;

	p = (char *)buf;
	while (n > 0)
	{
		p[n - 1] = ch;
		n --;
	}
	return (buf);
}
