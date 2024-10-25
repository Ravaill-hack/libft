/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:52:07 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 19:00:41 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while ((i >= 0) && (s[i] != c))
		i--;
	if (i < 0)
		return (0);
	return (&s[i]);
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