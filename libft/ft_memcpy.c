/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:50:58 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 21:50:58 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;

	i = 0;
	if (!n)
		return (dst);
	while (n > 0)
	{
		((char*)dst)[i] = ((const char *)src)[i];
		i++;
		n--;
	}
	return (dst);
}
