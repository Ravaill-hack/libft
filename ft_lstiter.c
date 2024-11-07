/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:15:28 by lmatkows          #+#    #+#             */
/*   Updated: 2024/11/07 18:03:05 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Itere sur la liste lst et applique la fonction f au contenu de chaque
// element.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !!f)
		return ;
	f(lst->content);
	if (lst->next)
		ft_lstiter(lst->next, f);
}
