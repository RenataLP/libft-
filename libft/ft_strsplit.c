/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:37:22 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/12 21:37:22 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_num(const char *str, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	word_len(const char *str, char c, int i)
{
	int len;

	len = i;
	while (str[len] != c && str[len])
		len++;
	return (len - i + 1);
}

static char		*new_word(const char *str, char c, int *i)
{
	size_t	n;
	char	*arr;

	n = 0;
	arr = (char *)malloc(sizeof(char) * (word_len(str, c, *i) + 1));
	if (arr == NULL)
		return (NULL);
	while (str[*i] != c && str[*i] != '\0')
	{
		arr[n++] = str[*i];
		*i += 1;
	}
	arr[n] = '\0';
	while (str[*i] == c && str[*i] != '\0')
		*i += 1;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	num;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	num = word_num(s, c);
	while (s[j] == c && s[j] != '\0')
		j++;
	if (!(arr = (char **)malloc(sizeof(char *) * (num + 1))))
		return (NULL);
	while (i < num && s[j] != '\0')
		arr[i++] = new_word(s, c, &j);
	arr[i] = NULL;
	return (arr);
}
