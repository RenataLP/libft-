/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:46:54 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/16 17:46:54 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	if (!alst || !*alst)
		return ;
	(void)del((*alst)->content, (*alst)->content_size);
	free((void *)(*alst));
	*alst = NULL;
}
