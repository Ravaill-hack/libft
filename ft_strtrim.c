/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:35:09 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 12:35:19 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_charstr(char const c, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ista;
	size_t	iend;
	size_t	i;
	char	*tab;

	if (!s1 || !set)
		return (NULL);
	ista = 0;
	iend = ft_strlen(s1) - 1;
	i = 0;
	while ((s1[ista] != '\0') && (ft_charstr(s1[ista], set) == 1))
		ista ++;
	while ((iend > ista) && (ft_charstr(s1[iend], set) == 1))
		iend --;
	tab = malloc((iend - ista + 2) * sizeof(char));
	if (tab == 0)
		return (NULL);
	while (s1[i] && (i <= (iend - ista)))
	{
		tab[i] = s1[ista + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	puts(ft_strtrim("hhjjjiKALKUTAjjjihhhhhh", "hij"));
}
*/
