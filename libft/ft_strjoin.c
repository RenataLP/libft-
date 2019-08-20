/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:19:35 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/09 17:19:35 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(new_s = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < ft_strlen((char *)s1))
	{
		new_s[i] = s1[i];
		i++;
	}
	while (j < ft_strlen((char *)s2))
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
