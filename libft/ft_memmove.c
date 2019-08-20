/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 22:30:21 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 22:30:21 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memmove_end(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = n - 1;
	while (i > 0)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i--;
	}
	*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
	return (dst);
}

static void	*memmove_begin(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	if (n == 0)
		return (dst);
	if (src < dst)
		return (memmove_end(dst, src, n));
	else if (src > dst)
		return (memmove_begin(dst, src, n));
	else
		return (dst);
}
