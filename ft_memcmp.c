/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:58:00 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 11:45:30 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[15];
	char	str2[15];
	char 	str3[15];
	strcpy(str1, "Je vais bien");
	strcpy(str2, "Je vbis bien");
	strcpy(str3, "");
	printf("%d\n",ft_memcmp(str1, str3, 5));
	printf("%d\n",ft_memcmp(str1, str2, 4));
}
*/