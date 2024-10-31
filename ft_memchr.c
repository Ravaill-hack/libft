/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:22:08 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 11:40:31 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[15];
	strcpy(str, "ae vais bien");
	puts(str);
	printf("%p\n",str);
	printf("%p\n",ft_memchr(str, 'a', 5));
	printf("%p\n",ft_memchr(str, 'a', 3));
}
*/