/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:23:38 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 18:23:38 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int i;
	int s;

	i = 0;
	while (i < (int)n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		s = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (s == 0)
			i++;
		else
			return (s);
	}
	return (0);
}
