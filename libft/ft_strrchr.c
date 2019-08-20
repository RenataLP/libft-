/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:46:21 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 13:46:21 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = ft_strlen(s);
	while (s[i] != a)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	while (i > 0)
	{
		s++;
		i--;
	}
	return ((char *)s);
}
