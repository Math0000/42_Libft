/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 14:14:50 by mmoreira          #+#    #+#             */
/*   Updated: 2021/03/17 14:51:49 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numdigt(int n)
{
	unsigned int	cont;
	unsigned int	num;

	if (n < 0)
	{
		num = -n;
		cont = 2;
	}
	else
	{
		num = n;
		cont = 1;
	}
	while (num >= 10 && cont++)
		num /= 10;
	return (cont);
}

char		*ft_itoa(int n)
{
	unsigned int	cont;
	unsigned int	num;
	char			*temp;

	if (n < 0)
		num = -n;
	else
		num = n;
	cont = ft_numdigt(n);
	if (!(temp = malloc((cont + 1) * sizeof(char))))
		return (NULL);
	*(temp + cont) = '\0';
	while (cont--)
	{
		*(temp + cont) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*temp = '-';
	return (temp);
}
