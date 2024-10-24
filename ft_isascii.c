/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:33:30 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/24 17:54:38 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int	c1;
	int	c2;

	c1 = 67;
	c2 = 128;
	printf("%d\n", ft_isascii(c1));
	printf("%d\n", ft_isascii(c2));
}
*/
