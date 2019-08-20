/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 18:30:45 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/06 18:30:45 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int s;
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		s = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (s == 0)
			i++;
		else
			return (s);
	}
	return (0);
}
