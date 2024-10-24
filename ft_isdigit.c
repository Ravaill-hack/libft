/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:22:13 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/24 17:54:33 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int	c1;
	int	c2;

	c1 = 49;
	c2 = 67;
	printf("%d\n", ft_isdigit(c1));
	printf("%d\n", ft_isdigit(c2));
}
*/
