/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 07:06:01 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/06/22 07:56:05 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t ret;

	i = 0;
	while (*dest && i < size)
	{
		dest++;
		i++;
	}
	ret = ft_strlcpy(dest, src, size - 1);
	return (ret + 1);
}
