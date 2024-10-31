/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:55:22 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 10:39:02 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*strd;
	const unsigned char	*strs;

	i = 0;
	strd = (unsigned char *)dest;
	strs = (const unsigned char *)src;
	if (len == 0 || dest == src)
		return (dest);
	while (i < len)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[15];
	char	src[15];
	strcpy(dest, "Test test");
	strcpy(src, "Canaille");
	puts(dest);
	puts(src);
	ft_memcpy(dest, src, 2);
	puts(dest);
	puts(src);
}
*/