/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:06:27 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 10:31:04 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*adr, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = adr;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (adr);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[10];
	strcpy(str, "Test test");
	puts(str);
	ft_memset(str, 'y', 2);
	puts(str);
}
*/