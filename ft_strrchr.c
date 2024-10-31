/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:52:07 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/31 11:15:00 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while ((i >= 0) && (s[i] != (unsigned char)c))
		i--;
	if (i < 0)
		return (NULL);
	return ((char *)&s[i]);
}

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	str[] = "aacdefghijklmn";
	printf("%p\n", str);
	printf("%p\n", ft_strrchr(str, 'a'));
}
*/