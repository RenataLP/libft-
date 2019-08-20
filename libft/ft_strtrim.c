/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:55:12 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/19 16:55:12 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n'))
		len--;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
	{
		len--;
		i++;
	}
	if ((int)len <= 0)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s = s + i;
	i = -1;
	while (++i < len)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
