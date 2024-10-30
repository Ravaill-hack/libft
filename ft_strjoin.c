/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:12:12 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/30 10:32:46 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	char	*tab;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	tab = malloc((lens1 + lens2 +1) * sizeof(char));
	if (tab == 0)
		return (NULL);
	while (i < (lens1))
	{
		tab[i] = s1[i];
		i++;
	}
	while (i < (lens1 + lens2))
	{
		tab[i] = s2[i - lens1];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	puts(ft_strjoin("Je vais", " bien"));
	puts(ft_strjoin("", ""));
}
*/
