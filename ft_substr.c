/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:26:48 by jalcausa          #+#    #+#             */
/*   Updated: 2024/09/17 09:46:36 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns the subtring of s starting at pos start with a max size of len
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (s[i] && i < len)
	{
		res[i] = s[start + i];
		++i;
	}
	return (res);
}
