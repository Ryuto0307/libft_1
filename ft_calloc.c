/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:39:19 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/06 20:04:19 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	if (count  > SIZE_MAX / size && size != 0)
	{
		return (NULL);
	}
	ptr = (void *)malloc(count * size);
	if(!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count*size);
	return (ptr);
}
