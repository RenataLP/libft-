/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:59:26 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 17:59:26 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (char *)malloc(sizeof(char) * (size + 1));
	if (arr == NULL)
		return (NULL);
	while (i < size + 1)
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}
