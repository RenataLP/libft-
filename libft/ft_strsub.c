/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 13:34:25 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/19 13:34:25 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*st_strnew(size_t size)
{
	char	*arr;

	if (!(arr = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (size > 0)
	{
		arr[size] = 0;
		size--;
	}
	arr[size] = 0;
	return (arr);
}

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(arr = st_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = s[(size_t)start + i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}
