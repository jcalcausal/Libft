/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:28:38 by jalcausa          #+#    #+#             */
/*   Updated: 2024/09/17 17:49:42 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Removes the characters that appear in set from the beggining and end of s1
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && s1)
		++s1;
	i = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[i]) && i != 0)
		--i;
	return (ft_substr((char *)s1, 0, i + 1));
}
