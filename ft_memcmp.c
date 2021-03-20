/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 01:02:48 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/17 20:45:19 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1)
	{
		if (*(unsigned char*)(str1 + i) != *(unsigned char*)(str2 + i))
			return (*(unsigned char*)(str1 + i) - *(unsigned char*)(str2 + i));
		i++;
	}
	return (*(unsigned char*)(str1 + i) - *(unsigned char*)(str2 + i));
}
