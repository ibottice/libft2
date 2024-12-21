/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:48:45 by ibottice          #+#    #+#             */
/*   Updated: 2024/12/14 19:59:58 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *t, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (t[0] == '\0')
		return ((char *)s);
	while (s[a] != '\0' && a < len)
	{
		while (s[a + b] == t[b] && s[a + b] && a + b < len)
		{
			b++;
			if (t[b] == '\0')
				return ((char *)s + a);
		}
		a++;
		b = 0;
	}
	return (0);
}
