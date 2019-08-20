/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:00:33 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/09 17:00:33 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
		{
			return (((const unsigned char *)s1)[i] -
					((const unsigned char *)s2)[i]);
		}
		i++;
		n--;
	}
	return (0);
}
