/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 16:13:41 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/20 16:13:41 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_lpb(t_list **newlst, t_list *(*f)(t_list *elem), t_list *elem)
{
	if (*newlst == NULL)
	{
		if (!(*newlst = (t_list *)malloc(sizeof(t_list))))
			return (1);
		*newlst = f(elem);
		(*newlst)->next = NULL;
	}
	else
	{
		if (!((*newlst)->next = (t_list *)malloc(sizeof(t_list))))
			return (1);
		(*newlst)->next = f(elem);
		(*newlst)->next->next = NULL;
	}
	return (0);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*beginlst;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		if (st_lpb(&newlst, f, lst))
			return (NULL);
		if (newlst->next)
			newlst = newlst->next;
		else
			beginlst = newlst;
		lst = lst->next;
	}
	return (beginlst);
}
