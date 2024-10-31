/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:27:39 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 12:02:59 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if ((nmemb == 0) || (size == 0))
	{
		nmemb = 0;
		size = 0;
	}
	tab = malloc(nmemb * size);
	if (tab == 0)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}

/*
#include <stdio.h>

int main(void)
{
	size_t nmemb = 8;
	size_t size = sizeof(int);
	int *tab = ft_calloc(nmemb, size);
	size_t i;

	i = 0;
	if (tab == NULL)
	{
		printf("Allocation non reussie\n");
		return (1);
	}
	while (i < nmemb)
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
*/