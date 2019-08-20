/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:06:04 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 20:06:04 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	size_t i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
