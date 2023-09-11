/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:13:32 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/08/22 22:32:37 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *strrchr(const char *s, int c)
{
	const char *k;

	k = s;
	k = s + ft_strlen(s) - 1;
	if (c == '\0')
	{
		return(k + 1);
	}
	while (k != s - 1)
	{
		if (*k == (const char)c)
		{
			return (k - i);
		}
		k--;
	}
	return (NULL);
}
