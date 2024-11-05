/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmatkows <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:38:48 by Lmatkows          #+#    #+#             */
/*   Updated: 2024/11/05 11:11:41 by lmatkows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//	convertit un caractere minuscule en majuscule

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%c\n",ft_toupper('A'));
	printf("%c\n",ft_toupper('b'));
}
*/