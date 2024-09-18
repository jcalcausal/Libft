/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcausa <jalcausa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:51:46 by jalcausa          #+#    #+#             */
/*   Updated: 2024/09/18 20:04:48 by jalcausa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	res;
	int	i;

	res = 0;
	i = n;
	while (i > 9 || i < -9)
	{
		++res;
		i = i / 10;
	}
	if (n >= 0)
		return (res + 1);
	else
		return (res + 2);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*res;

	if (n == -2147483648)
		return ("-2147483648\0");
	else
	{
		len = ft_len(n);
		i = len - 1;
		res = (char *)malloc((len + 1) * sizeof(char));
		if (!res)
			return (NULL);
		if (n >= 0)
			res[0] = '+';
		else
		{
			res[0] = '-';
			n = -n;
		}
		while (i > 0)
		{
			res[i] = n % 10 + '0';
			n = n / 10;
			--i;
		}
		res[len] = '\0';
		return (res);
	}
}
