/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:55:57 by jalcausa          #+#    #+#             */
/*   Updated: 2024/09/16 14:00:44 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compares the string pointed by s1 and s2, similarly to strncmp but with void
pointers instead of const char *
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((s1[i]) - (s2[i]));
		else
			++i;
	}
	return (0);
}
