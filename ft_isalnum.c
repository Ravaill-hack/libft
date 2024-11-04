/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:07 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/11/04 17:11:41 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	These  functions  check  whether c falls into a certain character class
//	according  to the  specified  locale.   The functions without the "_l
//	suffix perform the check based on the current locale.

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 49;
	c2 = 67;
	c3 = 123;
	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	printf("%d\n", ft_isalnum(c3));
}
*/
