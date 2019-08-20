/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:31:21 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 13:31:21 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t j;

	j = 0;
	dst_len = ft_strlen((const char *)dst);
	src_len = ft_strlen((const char *)src);
	if (dst_len == size - 1)
		return (dst_len + src_len);
	if (dst_len >= size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_strncat(dst, src, src_len + 1);
	else
	{
		while ((dst_len + j) < size - 1)
		{
			dst[dst_len + j] = src[j];
			j++;
		}
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}
