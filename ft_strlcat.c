/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:36:13 by jalcausa          #+#    #+#             */
/*   Updated: 2024/09/15 13:53:46 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Concatenates string src to string dst, given a max size of the resulting
string of dstsize and NULL terminating it. It returns the length of the 
string it tried to create, srclen + destlen
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	while (dest[i])
		++i;
	if (size == 0 || size <= destlen)
		return (destlen + srclen);
	while (src[j] && j < (size - destlen - 1))
	{
		dest[i++] = src [j++];
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
