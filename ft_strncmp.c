/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:05:26 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 19:20:17 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')
		&& (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("Helalo", "Helblo", 3));
	printf("%d\n", ft_strncmp("Helalo", "Helblo", 5));
}
*/