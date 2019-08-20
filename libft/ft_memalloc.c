/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 17:17:09 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 17:17:09 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	arr = (void *)malloc(sizeof(void) * size);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		((int *)arr)[i] = 0;
		i++;
	}
	return ((void *)arr);
}
