/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:32:32 by lmatkows          #+#    #+#             */
/*   Updated: 2024/11/06 16:57:46 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//	Libere la memoire de l'element passe en argument en utilisant la fonction
//	del, puis avec free. la memoire de next ne doit pas etre free

/*
void	del(void *adr)
{
	;
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(((void *)lst)->content);
	free (lst->content);
}
