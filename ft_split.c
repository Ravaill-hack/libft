/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:28:37 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 13:28:32 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_len_ln(const	char *str, size_t ista, char c)
{
	size_t	i;

	i = ista;
	while ((str[i] != '\0') && (str[i] != c))
		i++;
	return (i - ista);
}

size_t	nb_lines(char const *s, char const c)
{
	size_t	count;
	size_t	i;
	int		is_nl;

	count = 0;
	i = 0;
	is_nl = 1;
	while (s[i] != '\0')
	{
		if ((is_nl == 1) && (s[i] != c))
		{
			count++;
			is_nl = 0;
		}
		else if(s[i] == c)
			is_nl = 1;
		i++;
	}
	return (count);
}


#include <stdio.h>

char	**malloc_col(char const *s, char c)
{
	char	**tab;
	size_t	nb_ln;
	size_t	i;
	size_t	is;

	nb_ln = nb_lines(s, c) + 1;
	i = 0;
	is = 0;
	tab = (char **)malloc((nb_ln + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < nb_ln)
	{
		tab[i] = malloc((ft_len_ln(s, is, c) + 1) * sizeof(char));
		is = is + ft_len_ln(s, is, c) + 1;
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	is;
	size_t	j;

	tab = malloc_col(s, c);
	i = 0;
	is = 0;
	while (i < nb_lines(s, c))
	{
		while (s[is] == c && s[is])
			is++;
		j = 0;
		while (s[is] != c && s[is])
		{
			tab[i][j] = s[is];
			is ++;
			j ++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
