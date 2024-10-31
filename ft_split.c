/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:51:38 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 18:03:00 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_nbwords(char const *s, char c)
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
		else if (s[i] == c)
			is_nl = 1;
		i++;
	}
	return (count);
}

static size_t	ft_lenw(char const *s, char c, size_t ist)
{
	size_t	i;

	i = ist;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	return (i - ist);
}

static char	*ft_fill(char const *s, char c, size_t istr, size_t lenw)
{
	char	*line;
	size_t	i;
	size_t	il;

	i = istr;
	il = 0;
	line = (char *)malloc((lenw + 1) * sizeof(char));
	if (!line)
		return (NULL);
	while ((s[i] != c) && (s[i] != '\0'))
	{
		line[il] = s[i];
		i++;
		il++;
	}
	line[il] = '\0';
	return (line);
}

static void	ft_free(char **tab, size_t istop)
{
	size_t	i;

	i = 0;
	while (i < istop)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	istr;
	size_t	i;

	istr = 0;
	i = 0;
	tab = (char **)malloc((ft_nbwords(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < ft_nbwords(s, c))
	{
		while (s[istr] == c)
			istr++;
		tab[i] = ft_fill(s, c, istr, ft_lenw(s, c, istr));
		if (tab[i] == NULL)
		{
			ft_free(tab, i);
			return (NULL);
		}
		i++;
		istr = istr + ft_lenw(s, c, istr);
	}
	tab[i] = NULL;
	return (tab);
}
