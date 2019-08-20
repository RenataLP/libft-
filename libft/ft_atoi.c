/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:06:56 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 18:06:56 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str >= 48 && *str <= 57) && *str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num > 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	return (num * sign);
}
