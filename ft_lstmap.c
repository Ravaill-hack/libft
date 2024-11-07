/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:28:07 by lmatkows          #+#    #+#             */
/*   Updated: 2024/11/07 11:59:09 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//	Itere sur la liste lst et applique la fonction f au contenu de chaque
//	element. Cree une nouvelle liste resultant des applications successives
//	de f. La fonction del detruit le contenu d'un element si necessaire

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	ret = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst->next != NULL)
	{
		ft_lstadd_back(ret, ft_lstnew(f(lst->content)));
		lst = lst->next;
		ret = ret->next;
	}
	ret->next = NULL;
	return (ret);
}
