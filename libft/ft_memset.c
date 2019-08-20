/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 20:54:13 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/05 20:54:13 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
