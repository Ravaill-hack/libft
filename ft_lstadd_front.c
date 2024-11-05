/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:25:20 by lmatkows          #+#    #+#             */
/*   Updated: 2024/11/05 16:27:28 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	ajoute l'element new au debut de la liste
//	1. il faut definir que l'element next de new est l'ancien premier
//	element (lst)
//	2. il faut modifier l'adresse du premier element de la liste, qui prend
//	l'adresse du nouvel element (new)

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
