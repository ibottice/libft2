/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibottice <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:22:24 by ibottice          #+#    #+#             */
/*   Updated: 2024/12/14 17:45:24 by ibottice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ss;
	size_t			i;

	cc = (unsigned char) c;
	ss = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (s[i] == cc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
