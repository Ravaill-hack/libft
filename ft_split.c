/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:28:37 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 10:18:39 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**malloc_col(char const *s, char c)
{
	char	**tab;
	size_t	nb_cl;
	size_t	nb_ln;
	size_t	i;
	size_t	is;

	nb_cl = 0;
	nb_ln = nb_lines(s, c) + 1;
	i = 0;
	is = 0;
	tab = malloc((nb_ln + 1) * sizeof(char *));
	while (i <= nb_ln)
	{
		tab[i] = malloc((ft_len_ln(s, is, c) + 1) * sizeof(char));
		is = is + ft_len_ln(s, is, c) + 1;
		i++;
	}
	tab[i] = NULL;
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
	while (s[is] != '\0')
	{
		while (s[is] == c)
			is++;
		j = 0;
		while (s[is] != c)
		{
			tab[i][j] = s[is];
			is ++;
			j ++;
		}
		tab[i][j] = '\0';
		i++;
	}
	return (tab);
}
