/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:46:07 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/24 18:54:42 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[10];
	strcpy(str, "Test test");
	puts(str);
	ft_bzero(str, 0);
	puts(str);
}
*/