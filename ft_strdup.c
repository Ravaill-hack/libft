/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:48:57 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 23:09:22 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_bzero(void	*adr, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = adr;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (adr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	tab = malloc(nmemb * size);
	if (tab == 0)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*str;
	int		i;

	len = ft_strlen((char *)s);
	str = ft_calloc((size_t)len + 1, sizeof(char));
	if (str == 0)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *s1 = "Je m'appelle Lucas";
	char *s2;

	s2 = ft_strdup(s1);
	printf("%s\n", s1);
	printf("%s\n", s2);
}
*/