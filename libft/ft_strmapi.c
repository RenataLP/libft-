/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:27:11 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 20:27:11 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
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
		arr[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
