/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lmatkows <lmatkows@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:45:10 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/10/25 16:35:34 by Lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

int	ft_strlcat(char *dest, char *src, int size_d_fin)
{
	int	i;
	int	len_d;
	int	len_s;
	int	len_ret;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	len_ret = len_d + len_s ;
	if (size_d_fin <= len_d)
		return (len_ret);
	while ((src[i] != '\0') && (len_d < (size_d_fin - 1)))
	{
		dest[len_d] = src[i];
		len_d++;
		i++;
	}
	dest[len_d] = '\0';
	return (len_ret);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src[] = "Test 1 2 1 2";
	char	dest1[30] = "Valeur a ecraser";
	char	dest2[30] = "Valeur a ecraser";

	puts(src);
	puts(dest1);
	puts(dest2);
	printf("%ld\n",strlcat(dest1, src, 30));
	printf("%d\n",ft_strlcat(dest2, src, 30));
	puts(dest1);
	puts(dest2);
}
*/