/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:45:21 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/13 17:45:21 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_length(int nbr)
{
	int n;

	n = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		n = 1;
	}
	while (nbr > 0)
	{
		n++;
		nbr = nbr / 10;
	}
	return (n);
}

char			*ft_itoa(int n)
{
	char	*str;
	size_t	length;

	length = ft_length(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if ((str = (char *)malloc(sizeof(char) * (length + 1))) == NULL)
		return (NULL);
	str[length--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[length--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
