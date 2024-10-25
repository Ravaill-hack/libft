/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:35:26 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 18:57:56 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != c))
		i++;
	if (s[i] == '\0')
		return (0);
	return (&s[i]);
}

/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	str[] = "abcdefghijklmno";
	printf("%p\n", str);
	printf("%p\n", ft_strchr(str, 'a'));
}
*/