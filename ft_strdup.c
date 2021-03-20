/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 06:14:17 by mmoreira          #+#    #+#             */
/*   Updated: 2021/02/19 18:19:05 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*temp;

	if (!(temp = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(temp, (const char*)s, ft_strlen(s) + 1);
	return (temp);
}
