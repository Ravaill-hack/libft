/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:22:08 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 19:50:33 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*str;
	unsigned char	ch;
	int				i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while ((i < n) && (str[i] != '\0'))
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