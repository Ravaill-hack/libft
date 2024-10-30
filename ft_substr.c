/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:31:38 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/30 10:08:41 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char	const *s, unsigned int start, size_t	len)
{
	size_t	lenstr;
	size_t	lenalloc;
	size_t	i;
	char	*tab;

	lenstr = 0;
	i = 0;
	while (s[(size_t)start + lenstr] != '\0')
		lenstr++;
	if (len >= lenstr)
		lenalloc = lenstr;
	if (len < lenstr)
		lenalloc = len ;
	tab = malloc((lenalloc + 1) * sizeof(char));
	if (tab == 0)
		return (NULL);
	while (i < lenalloc)
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	puts(ft_substr("je vais bien", 3, 12));
}
*/