/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:15:18 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/20 15:20:56 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n' ||
		c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *nptr)
{
	int i;
	int num;
	int sin;

	i = 0;
	num = 0;
	sin = 1;
	while (isspace(*(nptr + i)))
		i++;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sin *= -1;
		i++;
	}
	while (ft_isdigit(*(nptr + i)))
	{
		num = (num * 10) + (*(nptr + i) - '0');
		i++;
	}
	return (num * sin);
}
