/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamagishiryuukiyoshi <yamagishiryuukiyo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:31:04 by ryamagis          #+#    #+#             */
/*   Updated: 2023/09/12 15:52:48 by yamagishiry      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if(!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (s1[end] && ft_strchr(set, s1[end]) && end > start)
		end--;
	str = (char*)malloc(sizeof(char) * end - start + 1);
	if(str)
		ft_strlcpy(str, &s1[start], end - start + 1);
	else if (!str)
		return (NULL);
	return (str);
}
