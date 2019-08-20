/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 14:01:24 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 14:01:24 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *fnd, size_t len)
{
	size_t i;
	size_t j;
	size_t length;

	i = 0;
	j = 0;
	length = 0;
	while (fnd[length])
		length++;
	if (length == 0)
		return ((char *)src);
	while (i < len && src[i])
	{
		while (fnd[j] == src[i + j])
		{
			if ((j == length - 1) && ((i + j) <= len))
				return ((char *)src + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
