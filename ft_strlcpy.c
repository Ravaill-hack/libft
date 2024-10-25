/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:20:19 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 11:41:16 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	ft_strlcpy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	if (len == 0)
		return (ft_strlen(src));
	while ((i < len) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Test 1 2 1 2";
	char	dest[] = "Valeur a ecraser";

	puts(src);
	puts(dest);
	ft_strlcpy(dest, src, 2);
	puts(dest);
}
*/