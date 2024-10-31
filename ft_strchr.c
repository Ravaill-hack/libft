/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:35:26 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 11:31:47 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != (unsigned char)c))
		i++;
	if (s[i] == '\0' && (unsigned char)c != 0)
		return (NULL);
	return ((char *)&s[i]);
}

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	str[] = "abcdefghijklmno";
	printf("%p\n", str);
	printf("%p\n", ft_strchr(str, 'a'));
}
*/