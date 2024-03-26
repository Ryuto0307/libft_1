/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:13:30 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/29 19:59:10 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	get_sign(const char **str)
{
	long	sign;

	sign = 1;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

static long	convert_long(const char **str, long sign)
{
	long	result;

	result = 0;
	while ((**str >= '0' && **str <= '9'))
	{
		if (sign == 1)
		{
			if ((LONG_MAX - (**str - '0')) / 10 >= result)
				result = (result * 10) + (**str - '0');
			else
				return (LONG_MAX);
		}
		else
		{
			if ((LONG_MIN + (**str - '0')) / 10 <= -result)
				result = (result * 10) + (**str - '0');
			else
				return (LONG_MIN);
		}
		(*str)++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	long	sign;

	while ((*str >= '\t' && *str <= 13) || *str == ' ')
		str++;
	sign = get_sign(&str);
	return ((int)convert_long(&str, sign));
}
