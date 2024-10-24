/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:55:22 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/24 19:20:02 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, void *src, int len)
{
	int		i;
	char	*strd;
	char	*strs;

	i = 0;
	strd = dest;
	strs = src;
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
