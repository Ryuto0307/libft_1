/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:13:30 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/26 17:20:21 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || (unsigned)c - '\t' < 5);
}

int	ft_atoi(const char *s)
{
	int	n;
	int	neg;

	n = 0;
	neg = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-')
	{
		neg = 1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (ft_isdigit(*s))
	{
		n = 10 * n + (*s - '0');
		s++;
	}
	if (neg)
		return (-n);
	else
		return (n);
}
