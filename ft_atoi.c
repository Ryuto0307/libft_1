/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <saint.ryuto@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:13:30 by yamagishiry       #+#    #+#             */
/*   Updated: 2023/09/27 21:34:08 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	get_sign(const char **str)
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

long	convert_long(const char **str, long sign)
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

	while(((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	sign = get_sign(&str);
	return ((int)convert_long(&str, sign));
}
