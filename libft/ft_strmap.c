/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:10:11 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 20:10:11 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*arr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = (*f)(s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
