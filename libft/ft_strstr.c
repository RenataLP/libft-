/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:33:51 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 18:33:51 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *fnd)
{
	int i;
	int j;
	int length;

	i = 0;
	j = 0;
	length = 0;
	while (fnd[length])
		length++;
	if (length == 0)
		return ((char *)src);
	while (src[i])
	{
		while (fnd[j] == src[i + j])
		{
			if (j == length - 1)
				return ((char *)src + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
