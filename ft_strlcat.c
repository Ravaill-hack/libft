/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:45:10 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 11:02:19 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size_d_fin)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;
	size_t	len_ret;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	len_ret = len_d + len_s;
	if (size_d_fin < len_d)
		return (size_d_fin + len_s);
	while ((src[i] != '\0') && (len_d < (size_d_fin - 1)))
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (len_ret);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Test 1 2 1 2";
	char	dest1[30] = "Valeur a ecraser";
	char	dest2[30] = "Valeur a ecraser";

	puts(src);
	puts(dest1);
	puts(dest2);
	printf("%ld\n",strlcat(dest1, src, 30));
	printf("%d\n",ft_strlcat(dest2, src, 30));
	puts(dest1);
	puts(dest2);
}
*/